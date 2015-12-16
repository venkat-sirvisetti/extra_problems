#include<stdio.h>
struct node* reverse(struct node*);
struct node
{
int data;
struct node* next;
}*temp1,*temp2,*root;
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
temp1=root;
while(temp1->next->data<temp1->next->next->data)
temp1=temp1->next;
temp2=reverse(temp1->next);
temp2->next=NULL;
printf("sorted list is");
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
temp1->next=ptr->next;
ptr->next->next=ptr;
return ptr;
}
else
{
t->next=ptr;
return ptr;
}
}