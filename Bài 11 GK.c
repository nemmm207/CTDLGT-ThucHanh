#include <stdio.h>

int demSoDuongDeQuy(float a[], int n) {
    // Điều kiện dừng của đệ quy: nếu kích thước mảng là 0, trả về 0
    if (n == 0) {
        return 0;
    }
    // Nếu phần tử cuối cùng trong mảng là số dương, thì trả về 1
    // (để đếm phần tử này) cộng với số lượng các phần tử dương trong
    // mảng con (mảng không bao gồm phần tử cuối cùng) (gọi đệ quy)
    if (a[n - 1] > 0) {
        return 1 + demSoDuongDeQuy(a, n - 1);
    }
    // Nếu phần tử cuối cùng không phải số dương, thì chỉ gọi đệ quy
    // để đếm số lượng phần tử dương trong mảng con (mảng không bao
    // gồm phần tử cuối cùng)
    else {
        return demSoDuongDeQuy(a, n - 1);
    }
}

int main() {
    float a[] = {3.3, -2.5, 8.2, -3.7, 8.9, 6.8};
    int n = sizeof(a) / sizeof(a[0]);

    int soLuongDuong = demSoDuongDeQuy(a, n);
    printf("So luong gia tri duong trong mang la: %d\n", soLuongDuong);

    return 0;
}
