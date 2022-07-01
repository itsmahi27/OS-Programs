#!/bin/bash

read -p "Enter a number" number

if [ `expr $number % 2` == 0 ];
then
echo Even
else 
echo Odd
fi
