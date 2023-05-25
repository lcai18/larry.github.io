#include <stdio.h>
#include <string.h>

#include "functions.h"


#define MAX_WORD_NUM 1024
#define MAX_INPUT_SIZE 128
#define DEFAULT_RESTRICTION 10

int main(int argc, const char *argv[]) {
  if (argc != 2) {
    printf("Error: User must input file name\n");
    return 1;
  }
  
  char words[ MAX_WORD_NUM ][ MAX_WORD_SIZE + 1 ]; 
  int a = 0;
  FILE* fptr = fopen("test_file_1.txt", "w");
  fprintf(fptr, "5\nintermediate\ninttterrmeediateeee\nprogram\nppproograaamm\naaa");
  fclose(fptr);
  // TODO: Implement me!
  fptr = fopen("test_file_1.txt", "r");
  if (fscanf(fptr, "%d", &a) != 1) {
    printf("Error: first line is no a valid number\n");
    return 1;
  }
  words = read_file(fptr, words,a);
  char matchedWord[]
  fclose(fptr);

  return 0;
}
