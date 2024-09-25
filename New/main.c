#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k;
    float c;

    printf("number c: ");
    scanf("%f", &c);
    k = c + 273.15;
    printf("%.2f", k);
    return 0;
}
