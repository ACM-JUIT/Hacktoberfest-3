#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a,b,c;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
	    scanf("%d %d %d", &a, &b, &c);
	    int max;
	    
	    if (a >= b && a >= c) 
        //printf("%d\n", a); 
        {
            if(b>c)
            printf("%d\n", b);
            
            else
            printf("%d\n", c);
        }
  
        if (b >= a && b >= c) 
        //printf("%d\n", b);
        {
            if(a>c)
            printf("%d\n", a);
            
            else
            printf("%d\n", c);
        }
  
  
        if (c >= a && c >= b) 
        {
            if(b>a)
            printf("%d\n", b);
            
            else
            printf("%d\n", a);
        }
  
	    
	}
	return 0;
}
