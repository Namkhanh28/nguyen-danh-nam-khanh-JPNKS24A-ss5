#include <stdio.h>

int main() {
    int sotruoc = 42;  // Gán giá trị cho biến số nguyên cho trước
    int sonhap;        // Khai báo biến để lưu số người dùng nhập vào

    // Vòng lặp yêu cầu người dùng nhập số cho đến khi trùng với số cho trước
    do {
        printf("Nhập vào một số: ");
        scanf("%d", &sonhap);

        if (so_nhap == sotruoc) {
            printf("Bạn đã nhập đúng số %d. Kết thúc chương trình.\n", sotruoc);
        } else {
            printf("Số bạn nhập không đúng. Vui lòng thử lại.\n");
        }
    } while (sonhap != sotruoc);

    return 0;
}
