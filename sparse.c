#include<stdio.h>
#include<conio.h>
Void main()
{
 int m,n,s=0,i,j,x=0,y=0,b[100][3];
 printf("\nEnter the order of metrix ");
 scanf("%d%d",&m,&n);
 int a[m][n];
 for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
     {
        scanf( "%d",&a[i][j]);
      }
   } 
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
     {
       if(a[i][j]==0)
        {
          x++;
        }
       else
       {
         y++;
        }
      }
   }  
 if(x>y)
 {
  printf("spare metrix is\n\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
     {
       if(a[i][j]!=0)
        {
          b[s][0]=i;
          b[s][1]=j;
          b[s][2]=b[i][j];
          s++;
        }
      }
   }  
  for(i=0;i<m;i++)
  {
    for(j=0;j<3;j++)
     {
      printf("%d",b[i][j]);
      }
   }  
 }
 else
  {
    printf("Not spare metrix");
   }
}
 
