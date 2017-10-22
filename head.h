struct song {
  char name[256];
  char artist[256];
  struct song* next;
};

//Basic fxns
int index_of(char* s);
void print_song(struct song* song);
void print_list(struct song* list);
void print_list_end(struct song* list, struct song* end);
void print_lib(struct song* lib[]);
int list_length(struct song* list);
struct song* song_at(struct song* list, int n);
void print_artist(struct song* lib[], char* artist);
void print_artist_help(struct song* list, char* artist);
void shuffle_list(struct song* list);
void shuffle_lib(struct song* lib[]);

//Processing functions
  
struct song* insert_front(struct song* list, char* name, char* artist);
void insert_order(struct song* lib[], char* name, char* artist);
struct song* insert_order_help(struct song* list, char* name, char* artist);
struct song* create_node(struct song* next, char* name, char* artist);
struct song* find_artist(struct song* lib[], char *artist);


