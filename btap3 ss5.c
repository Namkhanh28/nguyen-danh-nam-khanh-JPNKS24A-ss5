#include <stdio.h>

int main() {
    int n, sum = 0;

    // Yêu cầu người dùng nhập vào một số nguyên dương
    printf("Nhập vào một số nguyên dương: ");
    scanf("%d", &n);

    // Kiểm tra nếu số nhập vào có phải là số nguyên dương không
    if (n <= 0) {
        printf("Số nhập vào không hợp lệ. Vui lòng nhập một số nguyên dương.\n");
    } else {
        // Tính tổng các số từ 1 đến n
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        // In kết quả ra màn hình
        printf("Tổng các số từ 1 đến %d là: %d\n", n, sum);
    }

    return 0;
}
 