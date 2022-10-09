#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *link;//self refriancial structure

}*head=NULL;
int main()
{

    int da;
   // struct node
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data :\n");
    scanf("d",&da);
     newnode->data=da;
    if(head==NULL)
    {
       newnode->link=head;
        head=newnode;
    }
    else
    {

        newnode->data=da;
        newnode->link=head;
        head=newnode;
        }
        printf(" data is=%d",newnode->data);




}
