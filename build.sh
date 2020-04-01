#!/usr/bin/env bash

set -e

run=0
file=0
prob="default"
for param in "$@"
do
    if [ ${param} = "-r" ]
    then
        run=1
    else
        if [ ${param} = "-f" ]
        then
            file=1
        else
            prob=${param}
        fi
    fi
done

echo "==== Start compiling ===="
g++ ${prob}.cc --std=c++14 -O2 -o ${prob}.out

if [ ${run} = 1 ]
then
    param=""
    if [ ${file} = 1 ]
    then
        param=" <${prob}_in.txt >${prob}_out.txt"
    fi
    echo "===== Start running ====="
    time ./${prob}.out${param}
fi

echo "======== Finished ======="