#include<stdio.h>
int main()
{
int num, n1 = 0, n2 = 1, nt = 0, a;
scanf("%d", &num);

for (a = 0; a <= num; ++a)
{
n1 = n2;
n2 = nt;
nt = n1 + n2;

}
printf("%d", n1);
}
