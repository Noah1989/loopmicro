Module.wait = async function(target, value) {
    do {
        await new Promise(requestAnimationFrame);
    } while (Module.peek(target) != value);
};

Module.set = async function(target, value) {
    Module.poke(target, value);
    Module.wait(target, value);
};

Module.write = async function(addr, data) {
    if (!Module.peek('busak')) {
        alert ('Please acquire the bus first!');
        return;
    }
    await Module.set ('addr', addr);
          Module.poke('data', data);
    await Module.set ('mreq', 1);
    await Module.set ('wr'  , 1);
    await Module.wait('data', data);
    await Module.set ('wr'  , 0);
    await Module.set ('mreq', 0);
}
