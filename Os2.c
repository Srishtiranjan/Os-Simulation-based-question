#include<stdio.h>
#include<conio.h>
void main()
{
int arr[]=10,n,i,j;
printf("Enter the number of gifts");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
for (i=0;i<10;i++)
{
 for(j=0;j<10;j++)
 {
 if(arr[i]< arr[i+1])
  {
   n=arr[i+1];
   arr[i+1]=arr[i];
   arr[i]=n;
    }
  }
 }
 for(i=0;i<10;i++)
 {
 printf("The s%d item is:-%d",arr[i]);
 }
 }
 
