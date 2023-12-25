#include <stdio.h>
int max_of_four(int a, int b, int c, int d){
    int max = 0, max_1 = 0, max_2 = 0;
    if (a > b)
        max_1 = a;
    else
        max_1 = b;
    if (c > d)
        max_2 = c;
    else
        max_2 = d;
    if (max_1 > max_2)
        max = max_1;
    else
        max = max_2;
    return max;
}
int main() {
    printf("Please insert four numbers individually:");
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}