#!/bin/bash

for ((i=1; i<=$1; i++))
do
    if [ -f "pw$i.c" ]; then
        gcc "pw$i.c" -o "$i.out"
    else
        echo "Not found pw$i.c"
    fi
done
