#include<stdio.h>
void mul(int a[][3],int b[][2],int u,int v,int x,int y );
main()
{
 int m1,m2,n1,n2,i,j;
  int mat1[50][50],mat2[50][50];
printf("enter row and column of 1st matrix\n");
scanf("%d%d",&m1,&n1);

	printf("enter row and column of 1st matrix\n");
        scanf("%d%d",&m2,&n2);
  if(n1!=m2)
  printf("nothing to do\n"); 

 else
  {
    for(i=0;i<m1;i++)
     for(j=0;j<n1;j++)
    {
      printf("enter element m[%d][%d]=  ",i,j);
      scanf("%d",&mat1[i][j]);
      prinf("\n");
     }

	for(i=0;i<m2;i++)
     for(j=0;j<n2;j++)
    {
      printf("enter element m[%d][%d]=  ",i,j);
      scanf("%d",&mat2[i][j]);
       prinf("\n");
     }
 
   mul(mat1,mat2,m1,n1,m2,n2);


   }

	void mul(int a[][3],int b[][2],int u,int v,int x,int y )
     {
       int mat3[50][50],i,j,k;
       for(i=0;i<u;i++) 
       { 
         for(j=0;j<v;j++)
        {
          for(k=0;k<v;v++)
           mat3[i][j] += a[i][k]*b[k][i];
         }

       }

      for(i=0;i<u;i++) 
       { 
         for(j=0;j<v;j++)
        {
         printf("%d\t",mat3[i][j]);

         }
        printf("\n");
       }





    }
