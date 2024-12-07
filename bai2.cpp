#include <stdio.h>
#include <iostream>
using namespace std;

char* xoaKhoangTrangDauVaCuoi(char str[]) {
    int i = 0, j = 0;

    while (str[i] == ' ') {
        i++;
    }

    while (str[i] != '\0') {
        str[j++] = str[i++];
    }

    j--;
    while (j >= 0 && str[j] == ' ') {
        j--;
    }

    str[j + 1] = '\0';

    return str;
}

char* inHoaKyTuDauMoiTu(char str[]) {
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] -= 32; 
    }

    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }

    return str;
}

int main() {
    char str[100];

    cout << "Nhap vao mot xau ky tu: ";
    cin.getline(str, 100);

    cout << "Xau sau khi xoa khoang trang o dau va cuoi: " << xoaKhoangTrangDauVaCuoi(str) << endl;

    cout << "Xau sau khi in hoa ky tu dau moi tu: " << inHoaKyTuDauMoiTu(str) << endl;

    return 0;
}
