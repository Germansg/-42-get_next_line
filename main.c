#include "get_next_line.h"
#include <stdio.h>

int main(int ac, char **av)
{
  char  *line;
  get_next_line(0, &line);
  printf("%s\n", line);
  return (0);
}
