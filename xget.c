#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc!=2) {
    printf("ERROR: Must be one argument\n");
    printf("\033[4mman xget\033[0m for more information\n");
  }
  else {
    char command[100] = "wget ";
    strcat(command, argv[1]);
    system(command);
  }
}
