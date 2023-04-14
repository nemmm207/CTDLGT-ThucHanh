#include <stdio.h>

// Hàm tính giai thừa đệ quy
int giaiThua(int n) {
    if (n == 0 || n == 1) {
        return 1; // Trường hợp cơ sở: 0! = 1, 1! = 1
    } else {
        return n * giaiThua(n - 1); // Tính giai thừa của n từ đệ quy
    }
}


int main() {
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    // Gọi hàm tính giai thừa và in kết quả
    int result = giaiThua(n);
    printf("Giai thua cua %d la: %d\n", n, result);

    return 0;
}
