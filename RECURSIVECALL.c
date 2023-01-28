#include<stdio.h>
 #include<stdlib.h>
  
  struct node{
    int data;
    struct node*next;
  }*first=NULL;

  void create (int A[],int n)
  {
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for ( size_t i = 1; i < n; i++)
    {
      t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
  }
  void display(struct node *p){
    while(p!=NULL)
    {
        printf("%d\t",p->data);

        p=(p->next);

    }
  }
  void rdisplay(struct node *p)
  {
    if(p!=NULL)
    {
      printf("%d\t",p->data);
      rdisplay(p->next);
    }
  }
 int main() 
{  
    int i;
    int p[]={3,5,6,7,8};
    create(p,5);
    rdisplay(first);

return 0; 
 } 