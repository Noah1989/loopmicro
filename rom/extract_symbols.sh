#! /bin/bash

(for label in $(grep -oE 'entrypoint.+$' $1.lst | cut -d' ' -f2); \
do grep -iE "^${label}:" rom.lst; done) \
| sed -e "s/^/${1^^}_/" -e 's/:\s*/ .EQU $/;s/ DEFINED AT LINE.*//' \
> $1.inc
