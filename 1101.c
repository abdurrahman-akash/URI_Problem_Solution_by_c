//Sequence of Numbers and sum
#include<stdio.h>
main()
{
    int i, a, b, sum=0;
    while(1)
    {
        scanf("%d %d", &a, &b);
        if(a<=0 || b<=0)
            break;
        else
        {
            if(a<b)
            {
                sum=0;
                for(i=a; i<=b; i++)
                {
                    printf("%d ", i);
                    sum=sum+i;
                }
            }

            else if(a>b)
            {
                sum=0;
                for(i=b; i<=a; i++)
                 {
                    printf("%d ", i);
                    sum=sum+i;
                 }
            }
            printf("Sum=%d", sum);
        }
    }
}
