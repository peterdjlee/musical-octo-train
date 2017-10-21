#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "head.h"
//#include "basic.c"
//#include "node.c"


int main() {
  printf("--------Creating Initial Playlist--------\n\n");
  struct song* songlib [26] = {0};

  print_lib(songlib);
  printf("\n--------Adding Songs--------\n\n");
  insert_order(songlib , "Feel It Still", "Portugal the Man");
  printf("added ptheman\n");
  print_lib(songlib);
  insert_order(songlib , "Houdini", "Foster the People");
  insert_order(songlib, "I Would Do Anything For You", "Foster the People");

  print_lib(songlib);

  printf("\n\nFinding 'Foster the People'\n\n");
  //print_lib(find_artist(songlib, "Foster the People"));
  return 0;
}
