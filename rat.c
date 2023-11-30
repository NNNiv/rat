#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
  if (argv[1] == NULL)
    printf("Please specify a file\n");
  else
  {
    char chr;
    FILE* file;
    int line = 1;

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
      printf("File not found\n");
      exit(1);
    } 
    printf("\nFile: %s\n\n", argv[1]);
    printf("%d\t", line);
    line++;
    while (chr != EOF)
    {

      chr = fgetc(file);
      if (chr == '\n') 
      {
        printf("%c", chr);
        printf("%d\t", line);
        line++;
      }
      else
        printf("%c", chr);
    }
  }
  return 0;
}
