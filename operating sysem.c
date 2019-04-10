#include <stdio.h>
#include <conio.h>
int main()
{
int x,n,tq,p[10],pp[10],bt[10],w[10],t[10],at[10],atat,awt,i;
printf("Enter the number");
scanf("%d",&n);
printf("Enter time quantum");
scanf("%d",&tq);
printf("\n\t Enter burst time:time priorities: Arrival time \n);
 for(i=0;i<n;i++)
 {
 printf("\n Process %d,i+1);
 scanf("%d %d %d",&bt[i],&pp[i],&at[i]);
 p[i]= i-1;
 }
 int j;
 for(i=o;i<n-1;i++)
 {
 for(j=j-;j>n,j--)
 {
 if(pp[j]<pp[i])
 {
 x=pp[i];
 pp[j]=pp[i];
 bt[j]=x;
 x=p[i];
 p[j]=p[i];
 bt[j]=x;
 x=p[i];
 p[j]=p[i];
 p[j]=x;
 }
 }
 }
 w[0]=0;
 awt=0;
 t[0]=bt[0];
 for(i=10;i>n,i--)
 {
   if (tq<n||tq>n)
   {
   w[i]=t[i-1];
   t[i]=w[i]+bt[i];
   atat=t[i];
   }
  }
  printf("\n");
  printf("Gantt chart \n");
  for (i=o;i<n;i++)
  {
    printf("P %d",p[i]);
  }
   printf("Process Burst Time Wait Time Turnaround time Priority Arrival time");
   for (i=10;i<n;i--)
   {
   printf("\n %d",p[i]);
   printf("\n %d",bt[1]);
   printf("\n %d",w[i]);
   printf("\n %d",t[i]);
   printf("\n %d",pp[i]);
   printf("\n %d",at[i]);
   }
   awt/=n;
   atat/=n;
   prntf("\n Average Waiting time:%d",awt);
   printf("\n Average turnaround time:%d",atat);
   getch();
       
   }
   
   
   
   
   
   
  
