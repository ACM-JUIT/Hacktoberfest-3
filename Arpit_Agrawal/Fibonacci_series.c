#include<stdio.h>
int main()    
{    
 
 int a=0,b=1,c,i,n;    
 
 printf("Enter the number of elements:");    
 
 scanf("%d",&n);    
 
 //printing 0 and 1    
 
 printf("\n%d %d",a,b);      
 
 //printing remaining elements using for loop
 
 for(i=2;i<n;i++)   
 {    
  c=a+b;    
  printf(" %d",c);    
  a=b;    
  b=c;    
 }  
  return 0;  
 }
