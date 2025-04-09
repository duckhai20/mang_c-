#include <iostream>
using namespace std;

void nhap_mang(int so_nguyen[], int m){
    cout << "Nhập phần thứ tự mảng: " << endl;
    for(int i = 0; i < m ; i++){
        cout << "Phần tử mảng: " << i + 1 << " : ";
        cin >> so_nguyen[i];
    }
}

void xuat_mang(int so_nguyen[], int m){
    int so;

    cout << "Nhập số cần tìm: ";
    cin >> so;

    for(int i = 0; i < m; i++){
        if(so_nguyen[i] == so){
            cout << "YES";
            return;
        }
    }
    cout << "N0" << endl;
}

int main(){
    int size;

    cout << "Nhập kích thước của mảng: ";
    cin >> size;

    while (size <= 0)
    {
        cout << "Kích thước của mảng không hợp lệ. Nhập lại: ";
        cin >> size;
        continue;
    }
    int myArr[size];
    nhap_mang(myArr, size);
    xuat_mang(myArr, size);
}