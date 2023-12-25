#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, f, g;
    float c, d, h, i;
    scanf("%d %d\n",&a, &b);
    scanf("%f %f\n",&c, &d);
    f = a + b;
    g = a - b;
    h = c + d;
    i = c - d;
    printf("%d %d\n",f, g);
    printf("%0.1f %0.1f\n",h, i);
    return 0;
}