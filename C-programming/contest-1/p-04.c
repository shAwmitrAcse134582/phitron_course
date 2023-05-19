#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int i, j;
    int x=n/2 + 1;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == x || j == x)
                printf("#");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}