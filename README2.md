# Os-Simulation-based-question
Q 19. Ten students (s1,s2,s3,s4,s5,s6,s7,s8,s9,s10) are going to attend an event. There are lots of gift shops, they all are going to the gift shops and randomly picking the gifts. After picking the gifts they are randomly arriving in the billing counter. The accountant gives the preference to that student who has maximum number of gifts. Create a C program to define order of billed students?

Soln:-
   #include<stdio.h>
   #include<conio.h>
   void main()
   {
   int arr[]=10;,n,i,j;
   printf("Enter the no. of gifts");
   for (i=0;i<10;i++)
   {
    scanf("%d",&arr[i]);
   }
     for (i=0;i<10;i++)
      {
      for(j=0;j<10;j++)
       {
        if(arr[i] <arr[i+1])
        {
         n=arr[i+1];
         arr[i+1]=arr[i];
         arr[i]=n;
         }
        }
       }
       for(i=0;i<10;i++)
       {
       printf("The s %d item is:- %d",i,arr[i]);
       }
       getch();
      }  
