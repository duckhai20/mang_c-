#include <iostream>

using namespace std;

int main(){
    string name, gioi_tinh,sinh_nhat;
    bool isError = true;
    while(isError == true){
        isError = false;
        cout << "\nNhập tên: ";
        getline(cin,name);
        cout << name;
        cout << "\nTên: " + name;
        cout << "\nNhập giới tính: ";
        getline(cin,gioi_tinh);
        cout << gioi_tinh;
        if(gioi_tinh == "Nam"){
            cout << "\nGiới tính: " + gioi_tinh;
        }
        else if(gioi_tinh == "Nu"){
            cout << "\nGiới tính: " + gioi_tinh;
        }
        else{
            cout << "\nLỗi: Giới tính " + gioi_tinh + " không tồn tại ";
            isError = true;
        }
    }
}