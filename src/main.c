#include <stdio.h>
#include <stdlib.h>
#include "connect4.h"
#include "tests_connect4.h"

int main(int argc, char** argv) 
{
  if(argc != 2)
    printf("Error\n");
  else {
    int test = atoi(argv[1]);
    check_tests(test);
  }    
  return EXIT_SUCCESS;
}