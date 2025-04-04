#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int i;
  char b[3];
  b[0] = '\\';
  b[1] = 'n';
  b[2] = 0;

  for(i = 1; i < argc; i++){
    if (strcmp(argv[i], b) == 0){
      write(1, "\n", 1);
      if(i >= argc - 1){
        write(1, "\n", 1);
        break;
      } else {
        continue;
      }
    }
    write(1, argv[i], strlen(argv[i]));
    if(i + 1 < argc){
      write(1, " ", 1);
    } else {
      write(1, "\n", 1);
    }
  }
  exit(0);
}

