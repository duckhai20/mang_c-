#include <iostream>
using namespace std;

void nhap_mang(int so_nguyen[][100], int m, int n){
    cout << "Nhập các phần tử của mảng:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> so_nguyen[i][j];
        }
    }
}

void xuat_mang(int so_nguyen[][100], int m, int n){

    cout << "Mảng vừa nhập\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << so_nguyen[i][j] << " ";
        }
        cout << endl;
    }

    int i, j;
    int max = so_nguyen[0][0];
    int min = so_nguyen[0][0];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            if(so_nguyen[i][j] > max){
                max = so_nguyen[i][j];
            }
            if(so_nguyen[i][j] < min){
                min = so_nguyen[i][j];
            }
        }
    }
    cout << "Số lớn nhất là: " << max << endl;
    cout << "Số bé nhất là: " << min << endl;
}
int main(){
    int n,m;

    cout << "Nhập số hàng: ";
    cin >> n;
    while (n <= 0)
    {
        cout << "Số hàng không hợp lệ. Nhập lại: ";
        cin >> n;
    }

    cout << "Nhập số cột: ";
    cin >> m;
    while (m <= 0)
    {
        cout << "Số hàng không hợp lệ. Nhập lại: ";
        cin >> m;
    }
    int so_nguyen[100][100];
    nhap_mang(so_nguyen, n , m);
    xuat_mang(so_nguyen ,n , m);
}