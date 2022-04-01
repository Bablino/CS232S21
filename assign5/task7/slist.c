#include "slist.h"
#include "snode.h"

struct slist *slist_create(){
  struct snode* node =(struct snode*) malloc(sizeof(struct snode));
  node->str= malloc(sizeof(char*)*strlen(s)+1);
  strcpy(node->str, s);
  node->next=NULL;
  return node;
}

struct snode* slist_add_back(struct slist *l, char *str){
    struct snode* p = malloc(sizeof(char*));
    strcpy(p->str, str);
    p=l;
    l=l->next;
}

/** 
 * Inserts new node in slist before the first node.
 *
 * @param l pointer to the list (non-NULL)
 * @param str pointer to a C string to store in new list node
 * returns a pointer to the newly added node
 */
struct snode* slist_add_front(struct slist *l, char *str){
  
}

/**
 * Returns the first snode with the given string.
 *  
 * @param l pointer to the list (non-NULL)
 * @parap str pointer to a string
 * @return struct snode* or NULL if no match
 */
struct snode* slist_find(struct slist *l, char *str){
  while(l!=NULL)
    {
      if(l->str==str)
        return l;
      l=l->next;
    }
  return l;
}

/**
 * Deallocate a list and all snodes
 *
 * @param l pointer tot he list
 */
void slist_destroy(struct slist *l){
  while(sizeof(l)!=0)
    {
      struct snode* p= l;
      free(p);
      l=l->next;
    }
    p=NULL;
}

/**
 * Traverse the list and print the content of each node.
 *
 * @param l pointer to the list (non-NULL)
 */
void slist_traverse(struct slist *l){
  while(l!=NULL)
    {
      printf("%s", l->str);
    }
}

/**
 * Returns the number of elements in the list (nodes).
 *
 * @param l pointer to the list (non-NULL)
 */
uint32_t slist_length(struct slist *l){
  int len= 0;
  while(l!=NULL)
    {
      len++;
      l=l->next;
    }
  return len;
}
/**
 * Deletes the first snode with the given string.
 *  
 * @param l pointer to the list (non-NULL)
 * @parap str pointer to a string
 */
void slist_delete(struct slist *l, char *str)
{
  while(l!=NULL)
    {
      if(l->str==str)
      {
        struct snode* p= l;
        free(p)
        l=l->next;
      }
      l->next;
    }
}



