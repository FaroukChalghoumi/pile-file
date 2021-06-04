#include "header.h"
int pile_vide ( pile p )
{
    if ( p == NULL )
        return 1 ; 
        else 
        return 0 ;
}
pile create_node ()
{
    pile p ;
    p = (pile) malloc ( sizeof ( struct node ));
    if ( pile_vide(p))
        exit(EXIT_FAILURE);
        else 
            p->next = NULL ;
    return p ;    
}

pile enpiler (pile p)
{
    pile nov ;
    nov = create_node();
    printf("\n num dossier =");
    scanf ("%d",&nov->data.num) ;
    printf("\n priority =");
    scanf ("%d",&nov->data.priority) ;
    if ( pile_vide(p))
        p = nov;
        else 
        {
            nov->next = p ; 
            p = nov ;
        }

    return p ; 
}

pile depiler (pile p )
{
    struct pile *supp;
    if ( pile_vide(p))
        return p ;
    supp = p ; 
    p = p->next ; 

    free(supp);
    
    return p ;
}



//**************************************FILE****************

struct file* init_file ()
{
    struct file* f ;
    f->head = f->queu = NULL ;
    return f;
}

int file_vide ( struct file *f)
{
    if ( f->head == f->queu == NULL)
        return 1 ;
        else 
        return 0 ; 
}

struct file* enfiler ( struct file *f , Data x)
{
    struct node *nov;
    nov = (struct node*)malloc(sizeof(struct node));
    nov->data = x ;
    nov->next = NULL;

    if ( file_vide(f))
        f->head = f->queu = nov ;
        else 
        {
            f->queu->next = nov ;
            f->queu = nov;
        } 
        return f ;
}

struct file* defiler ( struct file *f )
{
    if (file_vide(f))
        return f; 
        else 
        {
            struct node *supp ;
            supp = f->head ;
            f->head = f->head->next ; 
            if ( f->head == NULL )
                f->queu = NULL ; 

                free(supp);
        }
        return f;
}




