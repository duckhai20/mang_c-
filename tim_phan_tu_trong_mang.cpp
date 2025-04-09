#include <iostream>
using namespace std;

void nhap_mang(int so_nguyen[], int n){
    for(int i = 0; i < n; i++){
        cout << "Nhập phần tử thứ " << i + 1 << " : ";
        cin >> so_nguyen[i];
    }
}
void xuat_mang(int so_nguyen[], int n){

    int so;
    cout << "Nhập số cần kiểm tra: ";
    cin >> so;

    for(int i = 0; i < n; i++){
        if(so_nguyen[i] == so){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int size;
    
    cout << "Nhập số phần tử của mảng: ";
    cin >> size;

    while(size <= 0){
        cout << "Kích thước của mảng không hợp lệ. Nhập lại: ";
        cin >> size;
        continue;
    }

    int myArr[size];
    nhap_mang(myArr,size);
    xuat_mang(myArr,size);
}