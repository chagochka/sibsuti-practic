#!/bin/bash

for ((i=1; i<=$2; i++))
do
    if [ -f "pw$1-$i.c" ]; then
        gcc "pw$1-$i.c" -o "$i.out"
    else
        echo "Not found pw$1-$i.c"
    fi
done
