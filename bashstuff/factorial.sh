#!/bin/bash

read -p "Enter the number of factorial elements: " factorialLimit

factorial=1;

for ((i=1;i<=factorialLimit;i++))
do
factorial=$((factorial*i))
done

echo $factorial

