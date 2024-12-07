#include <stdio.h>
#include <iostream>
using namespace std;

int demKyTuB(char matrix[10][10], int n) {
    int countB = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 'b' || matrix[i][j] == 'B') {
                countB++;
            }
        }
    }
    return countB;
}

int main() {
    int n;
    cout << "Nhap kich thuoc ma tran (n x n): ";
    cin >> n;

    char matrix[10][10];
    cout << "Nhap cac phan tu ma tran (moi phan tu la mot chu cai):\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Dong " << i + 1 << ", ky tu thu " << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }

    cout << "Ma tran đa nhap:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int countB = demKyTuB(matrix, n);
    cout << "So luong ky tu 'b' trong ma tran: " << countB << endl;

    return 0;
}
