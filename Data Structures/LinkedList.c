#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct nodetype
{
    int id;
    struct nodetype *next;
} node;

node* create()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    printf("Enter id : ");
    scanf("%d",&temp->id);
    temp->next = NULL;
    return temp;
}

void print(node *head)
{
    if(head == NULL)
    {
        printf("List is EMPTY.");
    }
    else
    {
        node *t = head;
        printf("List is : ");
        while(t != NULL)
        {
            printf("%d  ",t->id);
            t = t->next;
        }
        printf("\n");
    }
}

node* insertAtBeginning(node *head)
{
    node *temp;
    temp = create();

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    return head;
}

node* insertAtEnd(node *head)
{
    node *temp,*t;
    temp = create();
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        t = head;
        while(t->next != NULL)
        {
            t = t->next;
        }
        t->next = temp;
    }
    return head;
}

/*node* insertInSortedWay(node* head)
{
    node *t, *t2;
    node *temp = create();
    t = head;
    t2 = head;
    if(head == NULL)
    {
        head = temp;
    }
    else
    if(temp->id <= t->id)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        while(t->next != NULL && t->id < temp->id)
        {
            t = t->next;
        }

        while(t2 -> next != t)
        {
            t2 = t2->next;
        }

        if(t->next == NULL)
        {
            t->next = temp;
            //break;
        }
        else
        {
            temp->next = t;
            t2->next = temp;
        }
    }
    return head;
}*/

/*node* insertInSortedWay(node* head)
{
    int b = 0;
    node *t, *t2;
    node *temp = create();
    t = head;
    t2 = head;
    if(head == NULL)
    {
        head = temp;
    }
    else
    if(temp->id <= t->id)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        while(t->id < temp->id)
        {
            if(t->next == NULL)
            {
                t->next = temp;
                b = 1;
                break;
            }
            t = t->next;
        }

        if(b==0)
        {
            while(t2 -> next != t)
            {
                t2 = t2->next;
            }
            temp->next = t;
            t2->next = temp;
        }
    }
    return head;
}*/

node* insertInSortedWay(node* head)
{
    node *t1, *t2;
    node *temp = create();

    if(head == NULL || temp->id <= head->id)
    {
        temp->next = head;
        head = temp;
        return head;
    }
    else
    if(head->next == NULL)
    {
        head->next = temp;
    }
    else
    {
        t1 = head;

        while(t1->id < temp->id)
        {
            t2 = t1;
            t1 = t1->next;
            if(t1 == NULL)
            {
                break;
            }
        }
        if(t1 == NULL)
        {
            t2->next = temp;
        }
        else
        {
            temp->next = t1;
            t2->next = temp;
        }
    }
    return head;
}


/*node* insertAfter(node *head)
{
    int i;
    node *t,*t2,*temp;

    printf("Enter ID after which u have to insert : ");
    scanf("%d",&i);
    temp = create();
    t = head;

    while(t->id < i)
    {
        t = t->next;
    }

    if(t->next == NULL)
    {
        t->next = temp;
    }
    else
    {
        t2 = t->next;
        temp->next = t2;
        t->next = temp;
    }
    return head;
}*/

node* insertAfter(node *head)
{
    int i;
    bool ispresent = false;
    printf("Enter ID after which u have to insert : ");
    scanf("%d",&i);
    node *t = head;

    while(t != NULL)
    {
        if(t->id == i)
        {
            ispresent = true;
            break;
        }
        t = t->next;
    }

    if(ispresent == false)
    {
        printf("Entered id is not present.\n");
    }
    else
    {
        node *temp = create();
        t = head;
        while(t->id != i)
        {
            t = t->next;
        }
        temp->next = t->next;
        t->next = temp;
    }
    return head;
}

node* deleteAtBegining(node *head)
{
    if(head == NULL)
    {
        printf("No node to delete.. List is EMPTY!!\n");
        return NULL;
    }
    else
    {
        node *t = head;
        head = head->next;
        free(t);
        return head;
    }
}

node* deleteAtEnd(node *head)
{
    node *temp = head, *t = head, *t2 = head;

    if(head == NULL)
    {
        printf("No node to delete.. List is EMPTY!!\n");
        return NULL;
    }
    else
    if(temp->next == NULL)
    {
        temp = temp->next;
        free(temp);
        head = NULL;
    }
    else
    {
        while(t->next != NULL)
        {
            t2 = t;
            t = t->next;
        }
        t2->next = NULL;
        free(t);
    }
    return head;
}

node* deleteParticular(node* head)
{
    if(head == NULL)
    {
        printf("No node to delete.. List is EMPTY!!\n");
        return NULL;
    }
    int i;
    bool ispresent = false;
    printf("Enter ID which you want to delete : ");
    scanf("%d",&i);

    node *temp, *t;
    t = head;

    while(t != NULL)
    {
        if(t->id == i)
        {
            ispresent = true;
            break;
        }
        t = t->next;
    }

    if(ispresent == false)
    {
        printf("Entered ID is not present.\n");
    }
    else
    {
        temp = head;
        t = head;

        while(i != temp->id)
        {
            temp = temp->next;
        }

        if(temp == head)
        {
            head = head->next;
            free(temp);
            return head;
        }
        else
        {
            while(t->next != temp)
            {
                t = t->next;
            }
            t->next = temp->next;
            free(temp);
        }
    }
    return head;
}

node* deleteEntireList(node* head)
{
    if(head == NULL)
    {
        printf("No node to delete.. List is EMPTY!!\n");
        return NULL;
    }
    node *t;
    while(head != NULL)
    {
        t = head;
        head = head->next;
        free(t);
    }
    return head;
}

node* sumOfOddEven(node* head)
{
    if(head == NULL)
    {
        printf("List is EMPTY!!\n");
        return NULL;
    }
    node* temp = head;
    int esum = 0, osum = 0;
    while(temp != NULL)
    {
        if(temp->id %2 == 0)
        {
            esum = esum + temp->id;
        }
        else
        {
            osum = osum + temp->id;
        }
        temp = temp->next;
    }
    printf("Even sum : %d\n",esum);
    printf("Odd sum : %d\n\n",osum);
    return head;
}

/*node* middleNode(node* head)
{
    int i, count = 0;
    node *temp,*t;
    temp = head;
    t = head;

    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    for(i=1;i<=count/2;i++)

    {
        t = t->next;
    }
    printf("Middle node is : %d\n\n",t->id);
    return head;
}*/

node* middleNode(node* head)
{
    if(head == NULL)
    {
        printf("List is EMPTY!!\n");
        return NULL;
    }
    node *t1,*t2;
    t1 = head;
    t2 = head;

    while(t2 != NULL)
    {
        t2 = t2->next;
        if(t2 == NULL)
        {
            break;
        }
        else
        {
            t2 = t2->next;
            t1 = t1->next;
        }
    }
    printf("Middle node is : %d\n\n",t1->id);
    return head;
}

node* displaykNodesFromEnd(node* head)
{
    if(head == NULL)
    {
        printf("List is EMPTY!!\n");
        return NULL;
    }
    int i,k,count = 0;
    printf("Enter no of nodes to be shown from the end : ");
    scanf("%d",&k);

    node *t;
    t = head;

    while(t!= NULL)
    {
        t = t->next;
        count++;
    }

    if(k==0)
    {
        return NULL;
    }
    else
    if(k>count)
    {
        printf("\nError {Maximum %d nodes are there} \n\n",count);
    }
    else
    {
        t = head;
        for(i=0;i<count-k;i++)
        {
            t = t->next;
        }

        printf("\nNodes from last are : ");

        for(i=0;i<k;i++)
        {
            printf("%d  ",t->id);
            t = t->next;
        }
        printf("\n\n");
        return head;
    }
}

void reverseOrder(node *head)
{
    if(head == NULL)
    {
        printf("List is EMPTY!!\n");
        return NULL;
    }
    else
    if(head->next != NULL)
    {
        reverseOrder(head->next);
    }
    printf("%d  ",head->id);
}

void main()
{
    node *head = NULL;
    int s;

    do
    {
        printf("\nEnter the number : \n");
        printf("1. Insert at Begining. \n");
        printf("2. Insert at end. \n");
        printf("3. Insert In Sorted Way. \n");
        printf("4. Insert After. \n");
        printf("5. Delete at begining. \n");
        printf("6. Delete at End.\n");
        printf("7. Delete Particular. \n");
        printf("8. Delete Entire List. \n");
        printf("9. Sum Of Odd & Even nodes. \n");
        printf("10. Middle node. \n");
        printf("11. Display k Nodes From End.  \n");
        printf("18. In Reverse Order. \n");
        printf("19. Print. \n");
        printf("20. Exit. \n");

        /*printf("");
        printf("");
        printf("");*/
        scanf("%d",&s);
        printf("\n");

        if(s==1)
            head = insertAtBeginning(head);

        if(s==2)
            head = insertAtEnd(head);

        if(s==3)
            head = insertInSortedWay(head);

        if(s==4)
            head = insertAfter(head);

        if(s==5)
            head = deleteAtBegining(head);

        if(s==6)
            head = deleteAtEnd(head);

        if(s==7)
            head = deleteParticular(head);

        if(s==8)
            head = deleteEntireList(head);

        if(s==9)
            head = sumOfOddEven(head);

        if(s==10)
            head = middleNode(head);

        if(s==11)
            head = displaykNodesFromEnd(head);

        if(s==18)
        {
            printf("List in reverse order : ");
            reverseOrder(head);
        }

        if(s==19)
            print(head);

        if(s==20)
            break;
    }
    while(s!=20);
}
