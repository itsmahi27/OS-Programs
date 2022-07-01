#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void sumOfOddNumbers(int n)
{
  int oddSum = 0, i;

  for (i = 1; i < n; i += 2)
  {
    oddSum += i;
  }

  printf("Parent Process -> Sum of even numbers upto %d: %d\n\n", n, oddSum);
}

void sumOfEvenNumbers(int n)
{
  int evenSum = 0, i;

  for (i = 0; i < n; i += 2)
  {
    evenSum += i;
  }

  printf("Child Process  -> Sum of even numbers upto %d: %d\n\n", n, evenSum);
}

int main()
{
  int newProcess = fork();

  if (newProcess == 0)
  {
    sumOfEvenNumbers(100);
  }
  else if (newProcess > 0)
  {
    sumOfOddNumbers(100);
  }
  else
  {
    printf("Error creating a new process.");
  }
}