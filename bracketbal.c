#include<stdio.h>
#include<string.h>

int i,top=-1;
int push(),b,x,count=0;
int pop();
char str[10],stack[10];
int push(int x)
	{ 
		top=top+1;
		stack[top]=x;
	}
int pop()
	{
		top=top-1;
	}
main()
	{
	printf("enter the string in form of unbalance symbol\n");
	scanf("%s",str);
	
for(i=0;i<strlen(str);i++)
	{
	
	if(top==-1)

	{	
	push(str[i]);
	count++;
	}
	else
	{ 
	if(str[i]!=')'&&str[i]!='}'&&str[i]!=']')
	{
 	push(str[i]);
	//printf("elment goes in the stack\n");
	count++;
	}
	
	else if(stack[top]+1==str[i] || stack[top]+2==str[i])
	{
	printf("balance symbol\n");
	printf("come in at %d position with %d position\n",top+1,i);
	pop(top);
	
	}
	else
	{
	printf("unbalance symbol\n");
	}
	}
}
}		
