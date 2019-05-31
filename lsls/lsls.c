#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
  DIR *d;
  struct dirent *dir;
  d = opendir(argv[1]);
  if (d)
  {
    while ((dir = readdir(d)) != NULL)
    {
      struct stat buff;
      stat(dir->d_name, &buff);
      printf("File Name: %s       File Size: %ld\n", dir->d_name, buff.st_size);
    }
    closedir(d);
  }

  return 0;
}