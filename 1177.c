//Array Fill 2
#include<stdio.h>
main()
{
    int a=0 , N[1000], t;

    scanf("%d", &t);

    for(int i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n", i, a);
        a++;
        if(a == t)
            a = 0;
    }
}
