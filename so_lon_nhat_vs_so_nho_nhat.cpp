#include <iostream>
using namespace std;

void nhap_mang(int so_nguyen[], int m){
    cout << "Nhập phần tử mảng " << endl;
    for(int i = 0; i < m; i++){
        cout << "Phần tử thứ: " << i + 1 << " : ";
        cin >> so_nguyen[i];
    }
}

void xuat_mang(int so_nguyen[], int m){

    int max = so_nguyen[0];
    int min = so_nguyen[0];

    cout << "Các phần tử của mảng: ";
    for(int i = 0; i < m; i++){
        cout << so_nguyen[i];
        if(i < m - 1){
            cout << " , ";
        }
    }
    cout << endl;

    for(int i = 1; i < m; i++){
        if(so_nguyen[i] > max){
            max = so_nguyen[i];
        }
        if(so_nguyen[i] < min){
            min = so_nguyen[i];
        }
    }

    cout << "Số lớn nhất là: " << max << endl;
    cout << "Số bé nhất là: " << min << endl;
}
int main(){

    int size;

    cout << "Nhập các phần tử của mảng: ";
    cin >> size;

    while (size <=0)
    {
        cout << "Kích thước của mảng không hợp lệ. Nhập lại";
    }
    
    int myArr[size];

    nhap_mang(myArr, size);
    xuat_mang(myArr, size);
}