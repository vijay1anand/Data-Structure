#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct list{ char name[20]; 
               
              char grade;
		   };
main()
{
 struct list num[100];
 int a,i;
 printf("give total number of student\n");
 scanf("%d",&a);
 char t;
 for(i=0;i<a;i++)
  {
   printf("enter name and grade of student roll no. wise\n");

   scanf("%s  %c",num[i].name,&num[i].grade);
   
  
   }

  printf("roll\tNAME\t\tGRADE\n");
   for(i=0;i<a;i++)
   {
    printf("%d\t%s\t\t\t%c\n",i+1,num[i].name,num[i].grade);

   }


}
