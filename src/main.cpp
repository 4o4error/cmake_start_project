#include "print_hello.h"

#include <stdio.h>
#include <string.h>
void main() {
  
  printHelloWorld();
  const int size = 15;
  int test[size];

  for (int i = 0; i < 15; ++i)
  {
    test[i] = i;
  }
  for (int i = 0; i < 20; ++i)
  {
    printf("%d",i);
  }
  
  char endOfList[] = "*";
  FILE* fp = fopen("student_list", "w");

  if (fp != NULL)
  {
  }
  char str[100];
  do
  {
    gets_s(str);
    if (strcmp(endOfList, str) == 0)
    {
      break;
    }
    printf("adding %s \n", str);
    fprintf(fp, str);

  } while (true);
}