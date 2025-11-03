#include<stdio.h>
#include<stdlib.h>
struct node
{
int value;
struct rep * repptr;//pointer to the head node of the list
struct node* next;
};
struct rep{
struct node*head;
struct node*tail;
{
int key;
struct node*obj_node_ptr;
struct nodaddr*next;
};
struct nodaddr*ndr=0;
//function to create a set
void makeset(int a)
struct nodaddr*t=(struct nodaddr*)malloc(size of(struct nodadder));
struct rep*newset=(struct rep*)malloc(size of(struct rep));
struct node*n=(struct node*)malloc(size of(struct node));
n->value=a;
st
n->repptr=newset;
n->next=0;
newset->head=newset->tail=n;
t->obj_node_ptr=n;
t->key=a;
t->next=ndr;
ndr=t;
}
struct re*find(int x)
{
struct nodaddr*t=ndr;
while(t!=0 && t->key!=x)
t=t->next;
return t->obj_node_ptr->repptr;
}
void unionset(int key1,int key2)
{
struct rep*set1,*set2;
struct node*t1;
set1=find(key1);
set2=find(key2);
if(set1==set2)
printf("\n %d and %d belongs to same set \n",key1,key2);
else
{
t1=set2->head;
while(t!=0)
{
t1->repptr=set1;
t1=t1->next;
}
set1->tail->next=set2->head
set1->tail=set2->tail;
free(set2);
}
}
void display-set(int a)
{
struct rep*r;
struct node*t;
r=find(a);
t=r->head;
printf("set numbers containg %d;",a);
while(t!=0)
{
printf("%d,",t->value);
t=t->next;
}
}
main()
{
 makeset(10);
 makeset(20);
 makeset(30);
 makeset(40);
 printf("find(10)=% X",find(10));
 printf("\n find(20)=% X",find(20));
 printf("\n find(30)=% X",find(30));
 printf("\n find(40)=% X",find(40));
 unionset(10,20);
 printf("\n after union of 10&20 find (20)=% X",find(20));
 unionset(30,40);
 printf("\n after union of 30&40 find (40)=% X",find(40));
 unionset(20,40);
 printf("\n after union of set containg 20 and set containg 40 find(40)=% X \n", find(40));
 display_set(40);
 }
 
