#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhap 2 so nguyên duong a va b: ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) return 0;

    long long bcnn = ((long long)a * b) / ucln(a, b);
    printf("Boi so chung nho nhat cua %d va %d la: %lld\n", a, b, bcnn);

    return 0;
}
