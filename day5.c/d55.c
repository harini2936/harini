#include <stdio.h>

void printTribonacci(int n) {
    int t0 = 0, t1 = 1, t2 = 1;
    int next;

    if (n >= 1) printf("%d ", t0);
    if (n >= 2) printf("%d ", t1);
    if (n >= 3) printf("%d ", t2);

    for (int i = 3; i < n; i++) {
        next = t0 + t1 + t2;
        printf("%d ", next);
        t0 = t1;
        t1 = t2;
        t2 = next;
    }
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Tribonacci
