#include <stdio.h>
#include <math.h>

void arithmeticSeries(int a, int d, int n) {
    int sum = 0;
    printf("Arithmetic Series: ");
    for (int i = 0; i < n; i++) {
        int term = a + i * d;
        printf("%d ", term);
        sum += term;
    }
    printf("\nSum of Arithmetic Series: %d\n", sum);
}

void geometricSeries(int a, int r, int n) {
    float sum = 0;
    printf("Geometric Series: ");
    for (int i = 0; i < n; i++) {
        float term = a * pow(r, i);
        printf("%.2f ", term);
        sum += term;
    }
    printf("\nSum of Geometric Series: %.2f\n", sum);
}

int main() {
    int a, d, r, n;
    
    printf("Enter the first term (a): ");
    scanf("%d", &a);
    
    printf("Enter the common difference for arithmetic series (d): ");
    scanf("%d", &d);

    printf("Enter the common ratio for geometric series (r): ");
    scanf("%d", &r);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("\n-- Arithmetic Series --\n");
    arithmeticSeries(a, d, n);

    printf("\n-- Geometric Series --\n");
    geometricSeries(a, r, n);

    return 0;
}