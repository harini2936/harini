#include <stdio.h>

int main() {
    int a, b, c, n;
    printf("Enter a value for a: ");
    scanf("%d", &a);
    printf("Enter a value for b: ");
    scanf("%d", &b);
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a); 
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
