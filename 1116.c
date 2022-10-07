//Dividing X by Y
#include<stdio.h>
main()
{
    int i, n, x, y;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n", (float)x/(float)y);
        }
    }
}
