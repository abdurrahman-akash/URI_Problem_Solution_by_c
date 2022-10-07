//Sum of Consecutive Odd Number 1
#include<stdio.h>
main()
{
    int a, b, i, sum=0;
    scanf("%d%d", &a, &b);

    if(a>b)
    {
        for(i=a-1; i>b; i--)
        {
            if(i%2!=0)
                sum = sum+i;
        }
    }
    else if(a<b)
    {
        for(i=a+1; i<b; i++)
        {
            if(i%2!=0)
                sum = sum+i;
        }
    }
    else if(a==b)
        sum=0;
    printf("%d\n", sum);
}
