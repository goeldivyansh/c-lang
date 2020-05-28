#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* removeDuplicates(Node *head){

    Node *t = head;
    Node *t1 = head;
    Node *t2 = NULL;
    if(head == NULL) return head;

    while(t != NULL)
    {
        t1 = t->next;
        while(t1 != NULL)
        {
            if(t1->data == t->data)
            {
                t2 = head;
                while(t2->next != t1) t2 = t2->next;
                t2->next = t1->next;
                free(t1);
                t1 = t2->next;
            }
            else
                t1 = t1->next;
        }
        t = t->next;
    }
    return head;
}

Node* insert(Node *head,int data)
{
  Node *p = (Node*)malloc(sizeof(Node));
  p->data = data;
  p->next=NULL;

  if(head==NULL){
   head=p;

  }
  else if(head->next==NULL)
  {
      head->next=p;

  }
  else{
  Node *start=head;
  while(start->next!=NULL)
    start=start->next;

  start->next=p;

  }
      return head;
}
void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
    head=removeDuplicates(head);
	display(head);

}



