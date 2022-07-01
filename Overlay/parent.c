#include <stdio.h>
#include <unistd.h>

int main()
{
  printf("Parent process \n");
  char *args[] = {"./child", NULL};

  execvp(args[0], args);

  return 0;
}