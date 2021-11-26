#!/bin/sh
#
# sha.sh
#
# Author: aKuad
#
# Published with CC0 license


org="hello"

echo -n "$org" > _tmp.txt

echo "$org"
openssl sha256 -hex "_tmp.txt" | sed -e 's/^.*= //'

rm _tmp.txt
