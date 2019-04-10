# Os-Simulation-based-question
Q.8 The following processes are being scheduled using a preemptive, round robin scheduling algorithm. Each process is assigned a numerical priority, with a higher number indicating a higher relative priority. In addition to the processes listed below, the system also has an idle task (which consumes no CPU resources and is identified as P idle).  This task has priority 0 and is scheduled whenever the system has no other available processes to run. The length of a time quantum is 10 units. If a process is preempted by a higher-priority process, the preempted process is placed at the end of the queue.
 Thread     Priority               Burst                     Arrival
  P1         40 	            20 	                    0
  P2	       30 	            25 	                   25
  P3	       30 	            25 	                   30
  P4	       35 	            15 	                   60
  P5 	        5 	            10 	                  100
  P6	       10 	            10 	                  105
Write a C code to 
a. Show the scheduling order of the processes using a Gantt chart.
b. What is the turnaround time for each process?
c. What is the waiting time for each process?
d. What is the CPU utilization rate?
 
Soln:

#include <stdio.h>
#include <conio.h>
int main()
{
int x,n,tq,p[10],pp[10],bt[10],w[10],t[10],at[10],awt,atat,i;
printf("Enter the number");
scanf("%d",&n);
printf("Enter time quantum");
scanf("%d",&tq);
printf("\n\t Enter burst time:time priorities: Arrival time \n);
 for(i=0;i<n;i++)
 {
 printf("\n Process %d,i+1);
 scanf("%d %d %d",&bt[i],&pp[i],&at[i]);
 p[i]=i-1;
 }
 int j;
 for(i=o;i<n-1;i++)
 {
 for(j=j-;j>n,j--)
 {
 if(pp[j]<pp[i])
 {
 x=pp[i]
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
