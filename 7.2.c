#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],d[10][10],i,j,k,c,r1,c1,r2,c2,sum=0;
    printf("Enter the number of raw : ");
    scanf("%d",&r1);
    printf("\nEnter the number of coloum : ");
    scanf("%d",&c1);

     printf("\nEnter value for first matrix : ");
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c1;j++)
         {
             scanf("%d",&a[i][j]);

         }
     }
printf("first matrix is :\n");
     for(i=0;i<r1;i++)
     {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");


     }
     printf("Enter the number of raw for second matrix : ");
     scanf("%d",&r2);
    printf("Enter the number of coloum for second matrix : ");
     scanf("%d",&c2);
     if(c1==r2)
     {
    printf("\nEnter value for second matrix : ");
     for(i=0;i<r2;i++)
     {
         for(j=0;j<c2;j++)
         {
             scanf("%d",&b[i][j]);

         }
     }
     printf("second matrix is :\n");

     for(i=0;i<r2;i++)
     {
        for(j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
printf("\n");

     }
    printf("multiplication of matrix is : \n");
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c2;j++)
         {
             for(k=0;k<c1;k++)
             {
                 sum=sum+a[i][k]*b[k][j];
             }
             d[i][j]=sum;
             sum=0;
         }

     }

     for(i=0;i<r1;i++)
     {
         for(j=0;j<c2;j++)
         {
             printf("%d ",d[i][j]);
         }
         printf("\n");
     }
   }
   else
   {
       printf("multiplication of matrix is not posible");
   }
}
