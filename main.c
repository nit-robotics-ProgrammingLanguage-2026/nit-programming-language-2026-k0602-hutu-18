#include <stdio.h>

int main(void)
{
    int n;
    int i;
long long sum = 0;
    scanf("%d", &n);
     if (n < 0) {
        printf("NG\n");
    } else {
        for (i = 1; i <= n; i += 2) {
            sum += i;
        }
        printf("%lld\n", sum);
    } /* TODO */
    return 0;
}
