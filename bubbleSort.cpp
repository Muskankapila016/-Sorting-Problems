#include <stdio.h>
int bubblesort(int a[],int n);
int main()
{ 
    int a[100],n,i;
  printf("enter the size of array");
  scanf("%d",&n);
   printf("enter %d elements",n);
   for(i=0;i<n;i++)
   { 
       scanf("%d",&a[i]);
   } 
   for(i=0;i<n;i++)
   { 
       printf("%d\t",a[i]);
   } 
   
   bubblesort(a,n);
   printf("\n");
   for(i=0;i<n;i++)
   { 
       printf("%d\t",a[i]);
   }
   
  
   } 
   int bubblesort(int a[],int n)
   {
       int i ,j,flag=0,temp;
       for(i=0;i<n-1;i++)
       {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
                flag = 1;
            }
            if(flag=0)
            {
                break;
            }
       }
          
  
   }
