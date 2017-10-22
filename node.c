//add headers!!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "head.h"

//WRAPPER: Inserts songs in alphabetical order
//arranges by artists first, then songs
void insert_order(struct song* lib[], char* name, char* artist)
{
  //printf("%d\n", index_of(artist));
  lib[index_of(artist)] = insert_order_help(lib[index_of(artist)], name, artist);
}

//HELPER: inserts a song node in the correct alphabetical order
struct song* insert_order_help(struct song* list, char* name, char* artist)
{
  //printf("=====inserting %s by %s=====\n", name, artist);
  struct song* first = list;
  //Are there any songs yet?
  //if not, create a new one in the ll. 
  if (!list)
    {
      //printf("creating first node\n");
      //printf("=====\n");
      return create_node(0, name, artist);
    }
  //Organize first by artist alphabetical order
  while(list->next && strcmp(artist, list->next->artist) > 0)
    {
      //printf("comp artists\n");
      list = list->next;
    }
  //If you run out of artists, and the new song has a different artist
  //than the last song 
  if (!list->next && strcmp(artist, list->artist) != 0)
    {
      //printf("ran out of artists\n");
      list->next = create_node(0, name, artist);
      //printf("=====\n");
      return first;
    }
<<<<<<< HEAD
    
  //compares song names
  while (list->next && strcmp(name, list->name) < 0)
=======
  //Not out of artists? Compare song name. 
  while(list->next && strcmp(name, list->next->name) > 0)
>>>>>>> 9fc45b5c04d06fb059ccf2d3b70770617a8c9cb4
    {
      //printf("comp names\n");
      list = list->next;
    }
  //if you are at the last node, and new song has a higher name than the
  //last node, add the new song to the end of the ll
  if (!list->next && strcmp(name, list->name) > 0)
    {
      //printf("adding at end of ll\n");
      list->next = create_node(0, name, artist);
      //printf("=====\n");
      return first;
    }
  //checks if song belongs at front of ll
  if (strcmp(name, list->name) < 0)
    {
      //printf("adding before first node\n");
      first = create_node(list, name, artist);
      //printf("=====\n");
      return first;
    }
  //printf("adding in between nodes\n");
  //all other cases
  struct song* tmp = list->next;
  list->next = create_node(tmp, name, artist);
  //printf("=====\n");
  return first;
}

//creates a song node, works like insert_front
struct song* create_node(struct song* next, char* name, char* artist)
{
  struct song* ret = (struct song*)malloc(sizeof(struct song));
  strcpy(ret->name, name);
  strcpy(ret->artist, artist);
  ret->next = next;
  return ret;
}


//Returns a pointer to the artist being searched
struct song* find_artist(struct song* lib[], char *artist){
  struct song* playlist = lib[index_of(artist)];
  while (playlist){
    if (strcmp(artist, playlist->artist) == 0)
      {
	return playlist;
      }
    playlist = playlist->next;
  }
  return playlist;
}



//trash pile   

