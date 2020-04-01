#!/usr/bin/env bash

set -e

prob=$1
start=$2
end=$3

for i in `seq $start $end`
do
    echo "==== Running case #${i} ===="
    time ./${prob}.out <${prob}_in_${i}.txt >${prob}_out_${i}.txt
    echo "==== Finished case #${i} ===="
done