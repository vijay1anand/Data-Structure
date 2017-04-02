#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int a=0,m;
struct node{ int data;
             struct node *next;
            };

struct node *front=NULL,*rear=NULL;

void enqueue(int key)
{
 struct node *queue;
 queue=(struct node*)malloc(sizeof(struct node));
   queue->next=NULL;
      queue->data=key;
	if(rear==NULL)
	{
         rear=queue;
         front=rear;
          
	}
		else
		 {
		   rear->next=queue;
		    rear=queue;
                   
		 }
 a++;
}
void dequeue()
{
 struct node *list;
 list=front;
      if(list==NULL)
        { printf("queue is empty\n");
           return;
	}

          
else if(list->next!=NULL)
{
  printf("dequeue element=%d\n",front->data);
     list=list->next;
	 free(front);
	 front=list;
           a--;
          return;
       
}
	
	else
	{
	  printf("dequeue element=%d\n",front->data);
           free(front);
	               
	   front=NULL;
           rear=NULL;
           a--; 
	   return;
	 }


}	
void display()
{
 struct node *list;
 list=front;
 	if((list==NULL)&&(rear==NULL))
	 { printf("Queue is empty\n");
           return;
          }
      
while(list!=rear)
{
  printf("element=%d\n",list->data);    
  list=list->next;
 }
 

	  if(list==rear)
	   printf("element=%d\n",list->data);

}
void isempty()
{
 if((front==NULL)&&(rear==NULL))
  printf("queue is empty\n");

  else
   printf("queue is not empty\n");  

}
main()
{
int i=0,p;


while(i!=7)
{
   printf("Queue :: choose 1=enqueue,2=dequeue,3=front element,4=display\n5=size of queue,6=empty,7=exit\n");
   scanf("%d",&i);
	
  switch(i)
    {
            case(1):
	    {     printf("enter element to enqueue\n");
		       scanf("%d",&p);
               enqueue(p);
              break;
             }           
           		case 2:
            		{  dequeue();
	    		   break;
                        } 

  	   case 3:
           {	 
	     printf("front element=%d\n",front->data);
	     break;
	    }
	     
	   		case 4:           
          		{display();
	     		  break;
           		 }
        
    	 case 5:
    	 { printf("Queue size=%d\n",a); 
    	   break;
	}


    			case 6:
      			{ isempty();	
				break;
                         }	    
	case 7:
        break;
             
	       default:
                continue;

}


}

}
