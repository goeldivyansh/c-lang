#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype
{
    struct nodetype* left;
    int id;
    struct nodetype* right;
}node;

node* root = NULL;


node* create()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    printf("Enter id : ");
    scanf("%d",&temp->id);
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void insert()
{
    node *temp;
    node *ptr;
    temp = create();

    if(root == NULL)
    {
        root = temp;
    }
  /*  else
    if(root->left == NULL && root->id > temp->id)
    {
        root->left = temp;
    }
    else
    if(root->right == NULL && root->id < temp->id)
    {
        root->right = temp;
    }*/
    else
    if(temp->id < root->id)
    {
        ptr = root;
        while(temp->id < ptr->id && ptr->left != NULL)
        {
            ptr = ptr->left;
        }
        while(temp->id > ptr->id && ptr->right != NULL)
        {
            ptr = ptr->right;
        }

        if(temp->id < ptr->id)
        {
            ptr->left = temp;
        }
        else
        {
            ptr->right = temp;
        }
    }
    else
    if(temp->id > root->id)
    {
        ptr = root;
        while(temp->id > ptr->id && ptr->right != NULL)
        {
            ptr = ptr->right;
        }
        while(temp->id < ptr->id && ptr->left != NULL)
        {
            ptr = ptr->left;
        }

        if(temp->id > ptr->id)
        {
            ptr->right = temp;
        }
        else
        {
            ptr->left = temp;
        }
    }
    printf("Node is inserted :)\n");
}

int height(node *ptr)
{
    //static node *ptr = root;
    int hl,hr;
    if(ptr == NULL)
    {
        return 0;
    }

    hl = height(ptr->left);
    hr = height(ptr->right);
    if(hl>=hr)
    {
        return hl+1;
    }
    else
    {
        return hr+1;
    }
}

void preorder(node *ptr)
{
    if(ptr == NULL)
        return;
    printf("%d  ",ptr->id);
    preorder(ptr->left);
    preorder(ptr->right);
}

void inorder(node *ptr)
{
    if(ptr == NULL)
        return;

    inorder(ptr->left);
    printf("%d  ",ptr->id);
    inorder(ptr->right);
}

void postorder(node *ptr)
{
    if(ptr == NULL)
        return;

    postorder(ptr->left);
    postorder(ptr->right);
    printf("%d  ",ptr->id);
}

void main()
{
    int ch,h;
    do
    {
        printf("1.Insert Node in tree.\n");
        printf("2.Delete Node in tree.\n");
        printf("3.Height of tree.\n");
        printf("4.Display tree in pre-order.\n");
        printf("5.Display tree in in-order.\n");
        printf("6.Display tree in post-order.\n");
        printf("7.Exit\nEnter Choice : ");
        scanf("%d",&ch);

        if(ch==1)
        {
            insert();
        }
        else
        if(ch==3)
        {
            h = height(root);
            printf("\nHeight : %d\n",h);

        }
        else
        if(ch == 4)
        {
            printf("\nPreorder Tree is : ");
            if(root == NULL)
            {
                printf("Empty\n\n");
            }
            else
            {
                preorder(root);
                printf("\n\n");
            }
        }
        else
        if(ch == 5)
        {
            printf("\nInorder Tree is : ");
            if(root == NULL)
            {
                printf("Empty\n\n");
            }
            else
            {
                inorder(root);
                printf("\n\n");
            }
        }
        else
        if(ch == 6)
        {
            printf("\nPostorderTree is : ");
            if(root == NULL)
            {
                printf("Empty\n\n");
            }
            else
            {
                postorder(root);
                printf("\n\n");
            }
        }

        else
        if(ch == 7)
            exit(0);
    }while(1);

}
