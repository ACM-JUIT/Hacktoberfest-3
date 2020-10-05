/*To print X pattern using Words like
        eg- "INDIA"  then pattern is
        I       I
          N   N
            D
          I   I
        A       A*/

#include <stdio.h>
int main()
{
   char S[100];
   printf("Enter word");
   scanf("%[^\n]%*c", S);
   for(int i = 0; i<strlen(S); i++)
   {
       for(int j = 0; j<strlen(S); j++)
       {
           if(i==j||((i+j)==(strlen(S)-1)))
              printf("%c ", S[i]);
           else
              printf("  ");
       }
       printf("\n");
   }
   return 0;
}
