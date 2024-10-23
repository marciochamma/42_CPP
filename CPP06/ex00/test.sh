#!/bin/bash

echo 'a'
./convert 'a'
echo

echo '42'
./convert '42'
echo

./convert '42.0f'
echo

./convert '42.0'
echo

./convert '+inf'
echo

./convert '-inff'
echo

./convert 'nan'
echo

./convert 'nanf'
echo

./convert 2147483647
echo

./convert 2147483648
echo

./convert -2147483649.
echo

./convert 350000000000000000000000000000000000000.0
echo

./convert 'unknown'
echo

