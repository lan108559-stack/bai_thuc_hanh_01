#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Nhap n: ");
    if (scanf("%d", &n) != 1) return 0;

    if (isPrime(n)) {
        printf("%d la so nguyen to\n", n);
    } else {
        printf("%d khong phai so nguyen to\n", n);
    }
    return 0;
}
