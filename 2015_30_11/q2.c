#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
};
void main()
{
struct node *one,*two,*final,*temp,*cur;
int i;
printf("enter the first list elements(press -1 to terminate) in ascending order");
scanf("%d",&i);
one=temp=cur=NULL;
while(i!=-1)
{
temp=(struct node *)malloc(sizeof(struct node));
temp->data=i;
temp->next=NULL;
if(one==NULL)
{
one=temp;
}
else
cur->next=temp;
cur=temp;
scanf("%d",&i);
}
printf("enter the second list elements(press -1 to terminate) in ascending order");
scanf("%d",&i);
two=temp=cur=NULL;
while(i!=-1)
{
temp=(struct node *)malloc(sizeof(struct node));
temp->data=i;
temp->next=NULL;
if(two==NULL)
two=temp;
else
cur->next=temp;
cur=temp;
scanf("%d",&i);
}
final=NULL;
cur=NULL;
while(one!=NULL&&two!=NULL)
{
if(one->data<two->data)
{
if(final==NULL)
{	
final=one;
cur=final;
one=one->next;
}
else
{
cur->next=one;
cur=cur->next;
one=one->next;
}
}
else if(one->data>two->data)
{
if(final==NULL)
{
final=two;
cur=final;
two=two->next;
}
else
{
cur->next=two;
cur=cur->next;
two=two->next;
}
}
else
{
if(final==NULL)
final=one;
else
{
cur->next=one;
cur=cur->next;
one=one->next;
cur->next=two;
cur=cur->next;
two=two->next;
}
}
}
while(one!=NULL)
{
cur->next=one;
cur=cur->next;
one=one->next;
}
while(two!=NULL)
{
cur->next=two;
cur=cur->next;
two=two->next;
}
printf("the merged list is:");
temp=final;
while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}
}