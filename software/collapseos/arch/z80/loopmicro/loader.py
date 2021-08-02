import sys
import serial
import pyftdi.serialext
from intelhex import IntelHex

#ser = serial.Serial()
#ser.baudrate = 62500
#ser.port     = '/dev/ttyS2'
#ser.stopbits = serial.STOPBITS_ONE
#ser.xonoff   = 0
#ser.rtscts   = 0
#ser.timeout  = 500
#ser.open()

ser = pyftdi.serialext.serial_for_url(
    'ftdi://ftdi:232:AH02CQGA/1',
    baudrate=62500,
    stopbits=serial.STOPBITS_ONE,
#    xonoff=0,
    rtscts=0,
    timeout=500
)

def reset():
    cmd = f'X'
    ser.write(cmd.encode())
    ser.flush()
    echo = ser.read(len(cmd)).decode()
    if echo != cmd:
        return False
    return ser.read(1).decode() == "."

def write_bytes(address, bytes):
    count = len(bytes)
    cmd = f'B{address:0{4}x}{count:0{4}x}'
    ser.write(cmd.encode())
    ser.flush()
    echo = ser.read(len(cmd)).decode()
    if echo != cmd:
        return None
    ser.write(bytes)
    ser.flush()
    return list(ser.read(count))

def chunks(seq, size):
    return (seq[pos:pos + size] for pos in range(0, len(seq), size))

hex = IntelHex(sys.argv[1])

print('READY')

fails = 0

write_bytes(0x0000, [0x76])
reset()

for (start, stop) in hex.segments():
    for chunk in chunks(range(start, stop), 1024):
        address = chunk[0]
        data = [hex[a] for a in chunk]
        print(f'WRITING {len(data)} BYTES AT ADDRESS ${address:0{4}x}')
        while True:
            check = write_bytes(address, data)
            if check == data:
                break
            if check is None:
                print(f"--- COMMAND ERROR - RETRYING ---")
            elif len(check) != len(data):
                print(f"--- LENGTH ERROR ({len(check)}) - RETRYING ---")
            else:
                print(f"--- VERIFICATION ERROR - RETRYING ---")

            fails+=1

reset()

ser.close()

print(f'DONE, {fails} RETRIES')
