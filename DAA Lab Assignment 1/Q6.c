#include <stdio.h>
int Fibonacci(int n){
    int a=0, b=1, c;
    // Print initial values
    printf("%d %d ", a, b);
    c = a + b;
    while(c <= n) {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }
}
int main() {
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d:\n", n);
    Fibonacci(n);
    return 0;
}
