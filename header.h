#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

//INCLUDES 
#include <stdlib.h>
#include <stdio.h>


//STRUCTS 

typedef struct 
{
    int num ; 
    int priority ;
}Data;

struct node
{
    Data data;
    struct node *next;
};

typedef struct node* pile;


struct file
{
    struct node *head;
    struct node *queu;
};

 




//FUNCTIONS
int pile_vide ( pile p);
pile create_node();
pile enpiler (pile p );
pile depiler (pile p);


#endif