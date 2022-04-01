#include<stdio.h>
#include<stdlib.h>
#include "snode.h"
typedef struct snode node_t;

node_t * setup() {
    //TODO:copy setup func from previous task
     node_t * head ;
    //TODO:head declared for you
    //Allocate three more pointers
    //head for the first Node, and temporary pointers node1, node2 and node3
    node_t* node1;
    //Allocate three node pointees and store references to them in the three pointers
    head = malloc(sizeof(node_t*));
    node1= malloc(sizeof(node_t*));
    //Dereference each pointer to store the appropriate number and string into the length and str fields in its pointee.
    strcpy(head->str, "hello");
    head->length=5;
    strcpy(node1->str, "there");
    node1->length=5;
    //Dereference each pointer to access the .next field in its pointee, 
    head->next=node1;
    head->next=node1;
    node1= malloc(sizeof(node_t*));
    strcpy(node1->str, "prof");
    node1->length=4;
    head->next->next=node1;
    free(node1);
    //and use pointer assignment to set the .next field to point to the appropriate Node. 
   return head;
}

void teardown(node_t* head) {
    //TODO: free all dynamic memory you requested.
    //Please complete the prototype of teardown.
    //You are not allowed to use globals
    node_t* tmp = head;
    while(head!=NULL)
    {
        tmp= tmp->next;
        free(head);
        head=tmp;
    } 
    free(tmp);
}

void add(node_t ** head, char * str, int length){
    //TODO: copy add func from task2
    node_t* temp = malloc(sizeof(node_t*));
    strcpy(temp->str, str);
    temp->length=length;
    temp->next= *head;
    *head=temp;
    free(temp);
}
void delete_node_at(node_t ** head, int idx) {
    //TODO: implement delete a node based on index
	//deletes a node at index idx, which ranges from zero to the length of the list - 1.
  node_t* curr = *head;
  node_t* befor= *head;
  if(*head==NULL){
    
  }
  else if(idx==1)
  {
    *head= curr->next;
    free(curr);
    curr=NULL;
  }
  else 
  {
    while(idx!=1)
    {
        befor=curr;
        curr=curr->next;
        idx--;
    }
    befor->next= curr->next;
    free(curr);
    curr=NULL;
  }
} 
void delete_node_key(node_t **head, char * key) {
    //TODO: implement delete a node based on key
	//given a certain key, find and delete.
  node_t* curr = *head;
  node_t* befor= *head;
  if(*head==NULL){
    
  }
  else 
  {
    while(curr->str != key)
    {
        befor=curr;
        curr=curr->next;
    }
    befor->next= curr->next;
    free(curr);
    curr=NULL;
  }
 
}
void dump_all(node_t*);
int main (int argc, char ** argv) {
    node_t * head = setup();
    add(&head, "hi", 2);
    delete_node_key(&head, "prof");
    delete_node_at(&head, 0);
    dump_all(head);
    teardown(head);
    return 0;
}

void dump_all(node_t * head) {
    printf("head -> ");
    node_t * cur = head;
    while(cur != NULL) {
        printf("%s ", cur->str);
	cur = cur->next;
    }
    printf("\ndone\n ");
}
