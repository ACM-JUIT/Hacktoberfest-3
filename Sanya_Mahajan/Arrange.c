#include<stdio.h>
main()
{
int marks[40];
int i,j,t;


printf("Enter the marks of students=");
    for(i=0;i<40;i++)
    {
    scanf("%d",&marks[i]);
    }

//Arranging the details in descending order as per the marks obtained my student
    for(i=0;i<39;i++)
      {
       for(j=0;j<(39-i);j++)
         {
          if(marks[j]<marks[j+1])
          {
          t=marks[j];
          marks[j]=marks[j+1];
          marks[j+1]=t;
          }
         }
       }

printf("Arranged data:");
for(i=0;i<40;i++)
{
printf("%d\n",marks[i]);
}
}
