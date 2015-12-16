#include<stdio.h>
struct node
{
int data;
struct node *next;
}*root,*temp1,*temp2;
struct node* reverse(struct node *);
int main()
{
int i;
printf("enter the list elements(press -1 to terminate)");
scanf("%d",&i);
root=temp1=temp2=NULL;
while(i!=-1)
{
temp1=(struct node *)malloc(sizeof(struct node));
temp1->data=i;
temp1->next=NULL;
if(root==NULL)
{
root=temp1;
}
else
temp2->next=temp1;
temp2=temp1;
scanf("%d",&i);
}
temp1=reverse(root);
temp1->next=NULL;
printf("reversed list is");
while(root!=NULL)
{
printf("%d ",root->data);
root=root->next;
}
return 0;
}
struct node * reverse(struct node *ptr)
{
struct node *t;
t=NULL;
if(ptr->next->next!=NULL)
t=reverse(ptr->next);
if(t==NULL)
{
root=ptr->next;
ptr->next->next=ptr;
return ptr;
}
else
{
t->next=ptr;
return ptr;
}
}