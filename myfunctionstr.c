#include<stdio.h>
#include<string.h>
int stle(char *a1)
   {
     int i=0;
     while(*a1!='\0')
     { i++;
       *a1++; 
     }
     return i;
    }
void stcp(char *a2,char *a1)
  {
     while(*a1!='\0')
     { *a2=*a1;
       *a1++;
        *a2++;
     }
     *a2='\0';
   }
void stcat(char *a1,char *a2)
 {
       while(*a1!='\0')
     { 
       *a1++; 
     }
    
    
    	 while(*a2!='\0')
     	{ *a1=*a2;
       		*a1++;
       		*a2++;
        }
     
    *a2='\0';

  }
int stcmp(char *a1,char *a2)
  { int i=0;
    while(*a1!='\0')
    {
      if(*a1++!=*a2++)
       i++;

      else
      continue;
     }

  if(i!=0)
   return 0;

	 else
	 return 1;
  }

main()
{
  char st1[20],st2[20],st3[40];
 int j;
 printf("give first string\n");
 gets(st1); 
 puts(st1);
 j=stle(st1);
 printf("length of string=%d\n",j);
 printf("copied sting\n");
 stcp(st2,st1);
 puts(st2);
printf("give second string\n");
 gets(st3); 
 puts(st3);
if(stcmp(st1,st3)==1)
{ printf("string 1 and string 2 are same\n");
 }    
	
      else
       {
	  printf("string 1 and string2 are different\n");
       }
 stcat(st3,st1);
printf("catenation of 1 after 2\n");
 puts(st3);
 	
}
