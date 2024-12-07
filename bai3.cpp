#include <stdio.h>
#include <iostream>
#include <iostream>
#include <cstring>
using namespace std;

struct SinhVien {
    char hoTen[50];
    char ngaySinh[15];
    char lop[10];
    float diem;
};

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    SinhVien danhSach[10];
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":\n";
        cin.ignore();
        cout << "Ho ten: ";
        cin.getline(danhSach[i].hoTen, 50);
        cout << "Ngay sinh: ";
        cin.getline(danhSach[i].ngaySinh, 15);
        cout << "Lop: ";
        cin.getline(danhSach[i].lop, 10);
        cout << "Diem: ";
        cin >> danhSach[i].diem;
    }

    cout << "Danh sach sinh vien co diem tren 8:\n";
    for (int i = 0; i < n; i++) {
        if (danhSach[i].diem > 8) {
            cout << "Ho ten: " << danhSach[i].hoTen << ", Ngay sinh: " 
                 << danhSach[i].ngaySinh << ", Lop: " << danhSach[i].lop 
                 << ", Diem: " << danhSach[i].diem << endl;
        }
    }

    cout << "Danh sach sinh vien thuoc lop AI:\n";
    for (int i = 0; i < n; i++) {
        if (strcmp(danhSach[i].lop, "AI") == 0) {
            cout << "Ho ten: " << danhSach[i].hoTen << ", Ngay sinh: " 
                 << danhSach[i].ngaySinh << ", Lop: " << danhSach[i].lop 
                 << ", Diem: " << danhSach[i].diem << endl;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (danhSach[i].diem < danhSach[j].diem) {
                SinhVien temp = danhSach[i];
                danhSach[i] = danhSach[j];
                danhSach[j] = temp;
            }
        }
    }

    cout << "Danh sach sinh vien sau khi sap xep giam dan theo diem:\n";
    for (int i = 0; i < n; i++) {
        cout << "Ho ten: " << danhSach[i].hoTen << ", Ngay sinh: " 
             << danhSach[i].ngaySinh << ", Lop: " << danhSach[i].lop 
             << ", Diem: " << danhSach[i].diem << endl;
    }

    return 0;
}
