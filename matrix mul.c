#include<stdio.h>

void getarr( int a[10][10], int r1, int c1)
{
int i,j;
for (i=0;i<r1;i++)
{
for (j=0;j<c1;j++)
{
printf( "Enter Element %d %d : " ,i,j);
scanf( "%d" ,&a[i][j]);
}
}
}

void mularr( int a1[10][10], int a2[10][10], int a3[10][10], int r1, int c1,int r2)
{ 

int i,j,k;
for (i=0;i<r1;i++)
{
for (j=0;j<c1;j++)
{
  a3[i][j]=0;
}
}


for (i=0;i<r1;i++)
{
for (j=0;j<c1;j++)
{
for (k=0;k<r2;k++)
{
a3[i][j] = a3[i][j] + (a1[i][k] * a2[k][j]);
}
}
}
}

void displayarr( int a[10][10], int r1, int c1)
{
int i,j;
for (i=0;i<r1;i++)
{
for (j=0;j<c1;j++)
{
printf( "%d\t" ,[i][j]);
}
printf( "\n" );
}
}

void main()
{
   int mat1[10][10],mat2[10][10],mat3[10][10];
  int m1,m2,n1,n2;
  printf( "Enter number of rows and column of 1st matrix\n" );
   scanf( "%d%d" ,&m1,&n1);
 printf( "Enter number of rows and column of 2nd matrix\n" );
 scanf( "%d" ,&m2,&n2);
getarr(mat1,m1,n1);
getarr(mat2,m2,n2);
if(n1==m2)
{
  printf("mutiply of 1st and 2nd is possible\n");
  mularr(mat1,mat2,mat3,m1,n2,m2);
  displayarr(mat3,m1,n2);
}

 else
  printf("multiply not possible\n");
}
