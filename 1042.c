//Simple Sort
#include<stdio.h>
main()
{
    int x,y,z, temp[3], aux;
    scanf("%d %d %d", &x, &y, &z);
    temp[0]=x;
    temp[1]=y;
    temp[2]=z;


    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(temp[i]<temp[j])
            {
                aux = temp[j];
                temp[j]=temp[i];
                temp[i]=aux;
            }
        }
    }
    printf("%d\n%d\n%d\n\n", temp[0], temp[1], temp[2]);
    printf("%d\n%d\n%d\n", x, y, z);
}
