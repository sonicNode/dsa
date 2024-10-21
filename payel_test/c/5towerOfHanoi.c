#include <stdio.h>
#include <math.h>

void toh(int n, char a, char b, char c)
{
    if (n == 0)
        return;
    toh(n - 1, a, c, b);
    printf("Move disk %d from %c to %c\n", n, a, c);
    toh(n - 1, b, a, c);
}

int main()
{
    int n;
    scanf("%d", &n);
    toh(n, 'A', 'B', 'C');
    printf("Total moves required: %.0f\n", pow(2, n) - 1);
    return 0;
}
