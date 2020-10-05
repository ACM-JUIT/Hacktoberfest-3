#include <stdio.h>
int main()
{
    int start,end,i,flag=0;
    scanf("%d",&start);
    scanf("%d",&end);

    while(start<end)
    {
        flag=0;

        if(start<=1)
        {
            start++;
            continue;
        }

        for(i=2;i<=start/2;i++)
        {
            if(start%i==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            printf("%d ",start);
        }

        start++;
    }
    return 0;
}
