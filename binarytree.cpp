#include<stdio.h>
#include<conio.h>
struct node
{
int data;

struct node *left,*right;

};

struct node *root;

void ins(struct node *n,int val,int opt)

{
struct node *t;
t=new node();
  t->data=val;
   t->right=t->left=NULL;

   if (opt==1)

     n->left=t;
   else

     n->right=t;

   printf("\n %d is inserted",val);

   if (opt==1)
   {
   printf("\tat the left\n");
      }
else
   {
   printf("\tat the right\n");
     }

}
void inser(struct node *t,int x)
{

if (t->data >x)

if (t->left==NULL)

ins(t,x,1);

else

inser(t->left,x);

else if (t->data < x)

if (t->right==NULL)

ins(t,x,2);

else

inser(t->right,x);

else

  printf("\n Element is already present in the list\n");

}
void inorder(struct node *p)
{
  if (p!=NULL)

  {

  inorder(p->left);

  printf("\n %5d",p->data);

  inorder (p->right);

  }

}

 

void preorder(struct node *p)
{

  if (p!=NULL)

  {

  printf("\n %5d",p->data);

  preorder(p->left);

  preorder (p->right);

  }

}

 void postorder(struct node *p)

{
  if (p!=NULL)

  {

  postorder(p->left);

  postorder (p->right);

  printf("\n %5d",p->data);

  }

}

 int main()

{

int op,n,z;
 scanf("%d",&z);
root=new node();
root->data=z;
root->right=root->left=NULL;
do

{

    printf("\n 1.Insertion");

    printf("\n 2.Preorder");

    printf("\n 3.Inorder");

    printf("\n 4.Postorder");

    printf("\n 5.SEARCHING");

    printf("\n Enter your choice\n");

    scanf("%d",&op);

  switch (op)

   {

    case 1: printf("\n Enter the element to insert\n");

              scanf("%d",&n);

              inser(root,n);

              break;

    case 2: printf("\n The preorder elements are\n");

              preorder(root);
              break;

    case 3: printf("\n The inorder elements are\n");

              inorder(root);
              break;

 

    case 4: printf("\n The postorder elements are\n");

              postorder(root);
			  break;
			  }
     //case 5:printf("\n searching the element\n");
  }while(op<5);
}
