#!/bin/bash

read -p "Enter a number: " number

if [ $number -eq 0 ]; then
echo Zero
elif [ $number -gt 0 ]; then
echo Positive
else
echo Negative
fi
