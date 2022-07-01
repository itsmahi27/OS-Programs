#!/bin/bash

fibonacci=0
helper=1

read -p "Enter the fibonacci limit: " fibonacciLimit

for ((i=0;i<=fibonacciLimit;i++)) do
echo $((fibonacci))
newfib=$((fibonacci+helper))
fibonacci=$helper
helper=$newfib
done
