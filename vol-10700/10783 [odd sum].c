#include<stdio.h>
int main()
{
    int a, b, sum, i, j, t;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &a, &b);
        sum = 0;
        for(j=a; j<=b; j++)
        {
            if(j%2!=0)
            {
                sum = sum + j;
            }
        }
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
