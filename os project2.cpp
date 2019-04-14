#include<conio.h>
#include<stdio.h>
int main()
{
	printf("**************WELCOME TO OPERATING SYSTEM******************\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("*******************BANKER'S ALGORITHM**********************\n");
 int n;       //n number of process
 int r;       // number of resources
 int i,j,k,cnt,cntt;
 int avail[10],p[10];
 int need[10][10],alloc[10][10],max[10][10];

 printf("Enter number of process :\t");
 scanf("%d",&n);
 
 printf("Enter resources available :\t ");
 scanf("%d",&r);
 
 //printf("Enter insatnces for resources :\t");
 for(i=0;i<r;i++)
 {
    printf("Enter insatnces for resources R%d ",i+1);
    scanf("%d",&avail[i]);
 }
 
 printf("\n Enter allocation matrix  \n");
 for(i=0;i<n;i++)
 {
   printf("p%d",i+1);  
   p[i]=0;
   for(j=0;j<r;j++)
   {
     scanf("%d",&alloc[i][j]);
   }
 }
 
printf("\n Enter MAX matrix  \n");
for(i=0;i<n;i++)
{
  printf("p%d",i+1);
  for(j=0;j<r;j++)
  {
    scanf("%d",&max[i][j]);
  }
}

for(i=0;i<n;i++)
{
  printf("\np%d\t",i+1) ;
  for(j=0;j<r;j++)
  {
    need[i][j]=max[i][j]-alloc[i][j];
    printf("\t%d",need[i][j]);
  }
}
 k=0;     cntt=0;
 printf("\n\n");
 while(k<15)
 {
   for(i=0;i<n;i++)
    { 
	 cnt=0;
      for(j=0;j<r;j++)
       {
         if(p[i]==1) break;
           if(need[i][j]<=avail[j])
             {
               cnt++;
             }
           if(cnt==r)
             {
              for(j=0;j<r;j++)
                {
                 avail[j]+=alloc[i][j];
                }
                printf("p%d\t",i+1);
				p[i]=1;
			cntt++;
            }
        }
    } k++;
 }
 if(cntt<n-1)
   {
     printf("\n deadlock ");
   }
      getch();
 }
