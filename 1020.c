#include <stdio.h>
int n;
int main()
{
    scanf("%d", &n);
    int years = n/365;
    int months = (n%365)/30;
    int days = n%365%30;
    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
    return 0;
}
