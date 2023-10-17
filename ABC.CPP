#include<stdio.h>
//#include<alloc.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp,*temp1
void insertf()
{
    int x;
    printf("Enter insert element:");
    scanf("%d",&x);
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(head->next==NULL)
    head->next=temp;
    else
    {
        temp->next=head->next;
        head->next=temp;
    }
}
void insertl() 
{
    int x;
    printf("Enter insert element:");
    scanf("%d",&x);
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=x;
        temp->next=NULL;
        if(head->next==NULL)
            head->next=temp;
        else
        {
            for(temp1=head->next;temp->next!=NULL;temp1=temp1->next)
                temp1->next=temp;
        }
}
void insertpos()
{
     int x,pos,i;
        printf("Enter insert element:");
        scanf("%d",&x);
        temp=(struct node*)malloc(sizeof(struct node))
        temp->data=x;
        temp->next=NULL;
        if(head->next==NULL)
            head->next=temp;
        else
        {
            printf("Enter position:");
            scanf("%d",&pos);
            for(temp1=head;i=0;i<pos;i++)
                temp1=temp1->next;
            temp->next=temp1->next;
            temp1->next->temp;
        }
}
void deletef()
{
    int x;
    if(head->next==NULL)
        printf("Deletion is not possible.\n");
    else
    {
        temp=head->next;
        x=temp->data;
        head->next=temp->next;
        free(temp);
        printf("Deleted element = %d\n",x);
    }
 }
 void deletel()
 {
     int x;
     if(head->next==NULL)
        printf("Deletion is not possible")
    else
    {
        for(temp=head;temp->next!=NULL;temp=temp->next)
            temp1=temp;
        x=temp->data;
        temp1->next=NULL;
        free(temp);
        printf("deleted element=%d\n",x);
            
    }
 }
void deletepos()
{
    int x;
    if(head->next==NULL)
        printf("Deletion is not possible");
    else
    {
        printf("Enter position:");
        scanf("%d",&pos);
        for(temp=head;i=0;i<pos;i++;temp=temp->next)
            x=temp->data;
        temp1=next=temp->next;
        free(temp);
        printf("Deleted element=%d\n",x);
    }
 }
 void display()
 {
     if(head->next==NULL)
        printf("Display is not possible\n");
    else
    {
        printf("Node details are\n");
        for(temp=head->next;temp!=NULL;temp=temp->next)
            printf("%d->%u\n",temp->data,temp->next);
    }
 }
 void menu()
 {
     printf("1.insertf\n");
     printf("2.insertl\n");
     printf("3.insertpos\n");
     printf("4.deletef\n");
     printf("5.deletel\n");
     printf("6,deletepos\n");
     printf("7.display\n");
     printf("8.exit\n");
 }
 void main()
 {
     int ch;
     menu();
     printf("Enter your choice:");
     scanf("%d",*ch);
     while(ch!=8) {
         switch(ch) 
         {
             case 1:
                 insertf();
                 break;
             case 2:
                 insertl();
                 break;
             case 3:
                 insertpos();
                 break;
             case 4:
                 deletef();
                 break;
             case 5:
                deletel();
                break;
            case 6:
                deletepos();
                break;
            case 7:
                display();
                break;
            default:
                printf("Unknown number entered\n");
            
             
         }
     }
 }
