#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

long int findSize(char file_name[])
{
  // opening the file in read mode
  FILE *fp = fopen(file_name, "r");

  // checking if the file exist or not
  if (fp == NULL)
  {
    printf("File Not Found!\n");
    return -1;
  }
  fseek(fp, 0L, SEEK_END);
  // calculating the size of the file
  long int res = ftell(fp);

  // closing the file
  fclose(fp);
  return res;
}

int main(int argc, char **argv)
{
  // Parse command line

  // Open directory

  // Repeatly read and print entries

  // Close directory

  return 0;
}