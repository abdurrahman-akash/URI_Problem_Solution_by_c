//Salary Increase
#include <stdio.h>
main()
{
    float s;

    scanf("%f", &s);

    if (s>0 && s<=400.00)
    {
        float salary = s+(s*.15);
        printf("Novo salario: %.2f\n", salary);
        float earn = (s*.15);
        printf("Reajuste ganho: %.2f\n", earn);
        printf("Em percentual: 15 %%\n");
    }

    else if (s>400.01 && s<=800.00)
    {
        float salary = s+(s*.12);
        printf("Novo salario: %.2f\n", salary);
        float earn = (s*.12);
        printf("Reajuste ganho: %.2f\n", earn);
        printf("Em percentual: 12 %%\n");
    }

    else if (s>800.01 && s<=1200.00)
    {
        float salary = s+(s*.10);
        printf("Novo salario: %.2f\n", salary);
        float earn = (s*.10);
        printf("Reajuste ganho: %.2f\n", earn);
        printf("Em percentual: 10 %%\n");
    }

    else if (s>1200.01 && s<=2000.00)
    {
        float salary = s+(s*.07);
        printf("Novo salario: %.2f\n", salary);
        float earn = (s*.07);
        printf("Reajuste ganho: %.2f\n", earn);
        printf("Em percentual: 7 %%\n");
    }

    else
    {
        float salary = s+(s*.04);
        printf("Novo salario: %.2f\n", salary);
        float earn = (s*.04);
        printf("Reajuste ganho: %.2f\n", earn);
        printf("Em percentual: 4 %%\n");
    }
}
