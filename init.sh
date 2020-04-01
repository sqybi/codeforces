#!/usr/bin/env bash

set -ex

rm -f "$1/build" "$1/test"
ln -s ../build.sh "$1/build"
ln -s ../test.sh "$1/test"