#include<stdio.h>
#include<string.h>
main()
{
  char st1[20],st2[20],st3[40];
 int j;
 printf("give first string\n");
 gets(st1); 
 puts(st1);
 j=strlen(st1);
 printf("length of string=%d\n",j);
 printf("copied sting\n");
 strcpy(st2,st1);
 puts(st2);
printf("give second string\n");
 gets(st3); 
 puts(st3);
 strcat(st3,st1);
printf("catenation of 1 after 2\n");
 puts(st3);
 
}
