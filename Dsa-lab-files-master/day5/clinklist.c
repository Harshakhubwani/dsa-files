#include<stdio.h>
#include<stdlib.h>
struct node
{
  struct node *prev;
  int inf;
  struct node *next;
}*curr,*start,*temp,*head,*last,*last1,*curr1;
void createlink(int n)
{
  int i;
  struct node *newnode;
  if(n>=1)
  {
    head=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&head->inf);
    head->next=NULL;
    head->prev=NULL;
    start=head;
    last=head;
    for(i=2;i<=n;i++)
    {
      newnode=(struct node*)malloc(sizeof(struct node));
      scanf("%d",&newnode->inf);
      newnode->next=NULL;
      newnode->prev=NULL;
      last->next=newnode;
      last=newnode;
      newnode->next=start;
      start->prev=newnode;
      last1=newnode;
     }
   }
 }
 void display()
 {
   curr=start;
   do
   {
     printf("the node is:%d\n",curr->inf);
     curr=curr->next;
    } while(curr!=start);
  }
  void addlinkbeg()
  {
    curr1=start;
    temp=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->inf);
    temp->prev=last1;
    last1->next=temp;
    curr1->prev=temp;
    temp->next=start;
    start=temp;
   }
   void addlinkend()
   {
    struct node *prev1,*temp2;
    prev1=last;
   
    temp2=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp2->inf);
    temp2->next=start;
    prev1->next=temp2;
    temp2->prev=prev1;
    start->prev=temp2;
    last=temp2;
    }
    void insertany(int n)
    {
      int i=1;
      struct node *curr1,*temp2,*prev2;
      prev2=start;
      while(prev2!=NULL && i<n)
      {
       curr1=prev2;
       prev2=prev2->next;
       i++;
       }
        temp2=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp2->inf);
         temp2->next=prev2;
         prev2->prev=temp2;
         curr1->next=temp2;
         temp2->prev=curr1;
      }
      void deletebeg()
      {
      struct node *prev3,*temp3;
        temp3=start;
        start=start->next;
        free(temp3);
       }
       void deleteend()
       {
         struct node *prev5;
        prev5=start;
        while(prev5->next!=NULL)
         prev5=prev5->next;
         prev5->prev->next=NULL;
         free(prev5);
         }
         void deleteany(int loc)
         {
           int i=1;
           struct node *temp5;
           temp5=start;
           while(temp5!=NULL && i<loc)
           { 
             i++;
             temp5=temp5->next;
             
            }
            temp5->prev->next=temp5->next;
            temp5->next->prev=temp5->prev;
            free(temp5);
           }
 int main()
 {
   int i,n,m,loc;
   int choice=1;
   while(choice!=9)
   {
     printf("\n1 for create linled list\n");
     printf("2 for insert linked list at begining\n");
     printf("3 for insert linked list at end\n");
     printf("4 for insert linked list at particular location\n");
     printf("5 for deleted begining node\n");
     printf("6 for delete end node\n");
     printf("7 for delete paticular node\n");
     printf("8 to display the linked list\n");
     printf("9 for exit\n");
     printf("\nenter the choice:\n");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:
            printf("enter the no of node you want to create:");
            scanf("%d",&n);
            createlink(n);
            break;
       case 8:
           display();
           break;
       case 2:
            addlinkbeg();
            break;
        case 3:
            addlinkend();
            break;
        case 4:
             printf("enter the position to add link list:");
             scanf("%d",&m);
             insertany(m);
             break;
          case 5:
          deletebeg();
          break;
        case 6:
          deleteend();
          break;
         case 7:
          printf("enter the pos of node you want to delete:");
          scanf("%d",&loc);
           deleteany(loc);
           break;
       default :
         printf("wrong input:");
         break;
       }
     }
     return 0;
     
 }
