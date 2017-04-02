#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int a=0,m;
struct node{ int data;
             struct node *next;
            }*top;
void push(int key)
{
 struct node *stack;
 stack=(struct node*)malloc(sizeof(struct node));
  stack->data=key;
	 if(top==NULL)
	{
	 
	 top = stack;

	}
		else
		{
                  
		  stack->next=top;
		  top=stack;

		}

 a++;
} 
void pop()
{
 struct node *list;
  list=top;
 if(list==NULL)
 printf("stack is empty\n");

 else
 {
  printf("poped element=%d\n",top->data);
  list=list->next;
  free(top);
  top=list;
  a--;
  
  }


}
void display()
{
	struct node *list;
       list=top;
        m=a;
      while(list!=NULL)
	{	printf("element[%d]=%d\n",m--,list->data);
	  list=list->next;
	  
         }
}
	void topel()
	{
          printf("top element=%d\n",top->data);
          }

main()
{
int i=0,p;


while(i!=6)
{
   printf("Stack :: choose 1=push,2=pop,3=top element,4=display,5=size of stack,6=exit\n");
   scanf("%d",&i);
	
  switch(i)
    {
            case(1):
	    {     printf("enter element to push\n");
		       scanf("%d",&p);
               push(p);
              break;
             }           
           		case 2:
            		pop();
	    		break;
 
  	   case 3:
           {topel();
	     break;
	    }
	     
	   		case 4:           
          		{display();
	     		  break;
           		 }
        
    	 case 5:
    	 { printf("stack size=%d\n",a); 
    	   break;
    	 }      
              
     case 6:
      break;
	     default:
             continue;



 }

}
}
