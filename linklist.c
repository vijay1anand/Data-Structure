#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{ int data;
             struct node *next;
            };
void traverse(struct node *head)
{
 while(head!=NULL)
{
 printf("%d\n",head->data);
 head=head->next;
}
}
void beginadd(struct node **head,int key)
{
 struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=key; /*store*/
 new_node->next=*head;  /*give address of head to the new begin element*/
 *head= new_node;/*change head*/
}
void endadd(struct node **head,int key)
{ struct node *list=*head;
   struct node *new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=key;
	 	new_node->next=NULL;

    if(*head==NULL)
     *head=new_node;

    else
    {
      while(list->next!=NULL)
      {
          list=list->next;
	}
      list->next=new_node;
	
     }	 

}
void del(struct node **head,int key)
{
 struct node *temp=*head;
 struct node *prev;
	if(temp!=NULL&&temp->data==key)
         { *head=temp->next;
            free(temp);
	  }
else
{
	while(temp!=NULL&&temp->data!=key)
	{
          prev=temp;
          temp=temp->next;
	}
    if(temp==NULL)
     { printf("key is not found\n");
       return;
     }
   prev->next=temp->next;
   free(temp);  
}

}

main()
{ int i=0,a,b;
 struct node *head;
while(i!=6)
{
 printf("give 1=add at end,2=add at begin,3=traverse,4=delete,6=exit\n");
  scanf("%d",&i);
 switch(i)
 {
    case 1:
       {printf("enter element to add at end\n");
        scanf("%d",&a);  
   	 endadd(&head,a);
          break;
        }
     case 2:
       {printf("enter element to add at begin\n");
        scanf("%d",&a);  
   	 beginadd(&head,a);
          break;
        }
    case 3:
    {
      traverse(head);
      break; 
     }
	 case 4:
       {printf("enter element to delete\n");
        scanf("%d",&a);  
   	 del(&head,a);
          break;
        }
      
     default:
     continue;


  }
 
}

}
