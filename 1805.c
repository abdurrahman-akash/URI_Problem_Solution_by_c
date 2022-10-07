//Natural sum
#include<stdio.h>
main()
{
    int i, x, y, sum=0;
    scanf("%d %d", &x, &y);

    for(i=x; i<=y; i++)
    {
        sum=sum+i;
    }
    printf("%d\n", sum);
}
