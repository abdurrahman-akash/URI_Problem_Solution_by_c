// Triangle
#include <stdio.h>
main()
{
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if((a+b)>c && (b+c)>a && (a+c)>b)
    {
        float per = a+b+c;
        printf("Perimetro = %.1f\n", per);
    }
    else
    {
        float area = .5*(a+b)*c;
        printf("Area = %.1f\n", area);
    }
}
