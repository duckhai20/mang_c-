#include <iostream>
using namespace std;

void so_dao_nguoc(int so_nguyen[], int m){
    cout << "Nhập số phần tử thứ của mảng " << endl;
    for(int i = 0; i < m; i++){
        cout << "Phần tử thứ: " << i + 1 << endl;
        cin >> so_nguyen[i];
    }
}

void xuat_mang(int so_nguyen[], int m){
    cout << "Số sau đảo ngược ";
    for(int i = 0; i < m; i++){
        int number = so_nguyen[i];
        int last_number, revert = 0;

        while (number != 0)
        {
            last_number = number % 10;
            revert = revert * 10 + last_number;
            number /= 10;
        }
        cout << "Số gốc: " << so_nguyen[i] << "Số đảo ngược: " << endl;
    }
}