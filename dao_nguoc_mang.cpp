#include <iostream>
using namespace std;

void nhap_mang(int so_nguyen[], int m){
    cout << "Nhập phần tử của mảng " << endl;
    for(int i = 0; i < m; i++){
        cout << "Phần tử thứ " << i + 1 << " : ";
        cin >> so_nguyen[i];
    }
}
void xuat_mang(int so_nguyen[], int m){
    cout << "Số đảo ngược " << endl;
    for(int i = 0; i < m; i++){
        int number = so_nguyen[i];
        int last_number, revert = 0;

        while(number != 0){
            last_number = number % 10;
            revert = revert * 10 + last_number;
            number /= 10;
        }
        cout << "Số gốc: " << so_nguyen[i] << " Số đảo ngược: " << revert << endl;
    }
}

int main(){
    int size;

    cout << "Nhập số phần tử của mảng: ";
    cin >> size;

    while (size <= 0)
    {
        cout << "Kích thước của mảng không hợp lệ. Nhập lại ";
        cin >> size;
        continue;
    }
    int myArr[size];

    nhap_mang(myArr, size);
    xuat_mang(myArr, size);
}