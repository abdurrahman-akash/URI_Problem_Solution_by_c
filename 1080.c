// Highest and Position
#include<stdio.h>
main()
{
    int n;
    int aux = 0;
    int pos = 0;

    for(int i=0; i<100; i++)
    {
        scanf("%d", &n);
        if(n>aux)
        {
            aux = n;
            pos = i;
        }
    }
    printf("%d\n%d", aux, pos+1);
}
