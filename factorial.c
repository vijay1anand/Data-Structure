#include<stdio.h>
#include<time.h>
long fact(int m);
long fact1(int c);
main()
{
 clock_t start,new;
 int n;
printf("enter numer whose factorial you want\n");
scanf("%d",&n);
start = clock();

printf("%ld\n",fact(n));
start = clock()-start;

	printf("itterative time = %lf second\n",(double)start/CLOCKS_PER_SEC);

		new = clock();
		printf("%ld\n",fact1(n));
                 new = clock()-new;

		printf("recurrsion time = %lf second\n",(double)new/CLOCKS_PER_SEC);
}

long fact(int m)
{
  int a=1,i;
   for(i=2;i<=m;i++)
     a*=i;

 return(a);
}

long fact1(int c)
 {
   if(c==1)
    return(1);
  else
   return(c*fact(c-1));


  }
