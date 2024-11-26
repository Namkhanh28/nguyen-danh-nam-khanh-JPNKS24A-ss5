#include <stdio.h>

int main() {
    int num;

    // Yêu cầu người dùng nhập vào một số nguyên dương từ 1 đến 10
    printf("Nhập vào một số nguyên dương từ 1 đến 10: ");
    scanf("%d", &num);

    // Kiểm tra xem số nhập vào có hợp lệ không
    if (num < 1 || num > 10) {
        printf("Số nhập vào không hợp lệ. Vui lòng nhập một số từ 1 đến 10.\n");
    } else {
        // In ra bảng cửu chương tương ứng với số đã nhập
        printf("Bảng cửu chương của %d:\n", num);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
    }

    return 0;
}
