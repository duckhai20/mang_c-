#include <iostream>
using namespace std;

void tim_phan_tu_trong_mang(int so_nguyen[], int m){
    cout << "Nhập phần tử thứ trong mảng: " <<endl;
    for(int i = 0; i < m;i ++){
        cout << "Phần tử thứ: " << i + 1 << " : ";
        cin >> so_nguyen[i];
    }

    int so;

    cout << "Nhập số cần tìm: ";
    cin >> so;

    cout << "Mảng dãy số: ";
    for(int i = 0; i < m; i++){
        cout << so_nguyen[i];
        if(i < m -1){
            cout << " , ";
        }
    }
    cout << endl;

    bool found = false;
    for(int i = 0; i < m; i++){
        if(so_nguyen[i] == so){
            found = true;
            break;
        }
    }
    if(found == true){
        cout << "Có số " << so << " trong mảng " << endl;
    }else{
        cout << "Không tìm thấy" << endl;
    }
}

void bubble_sort(int so_nguyen[], int m){
    cout << "Nhập phần tử thứ trong mảng: " << endl;
    for(int i = 0; i < m; i++){
        cout << "Phần tử thứ: " << i + 1 << " : ";
        cin >> so_nguyen[i];
    }

    cout <<"Mảng dãy số: ";
    for(int i = 0; i < m; i++){
        cout << so_nguyen[i];
        if(i < m -1){
            cout << " , ";
        }
    }
    cout << endl;

    for(int i = 0; i < m; i++){
        for(int j = 0;j < m;j++){
            if(so_nguyen[j] > so_nguyen[j + 1]){
                int temp = so_nguyen[j + 1];
                so_nguyen[j + 1] = so_nguyen[j];
                so_nguyen[j] = temp;
            }
        }
    }
    for(int i = 0; i < m; i++){
        cout << so_nguyen[i];
        if(i < m -1){
            cout << " , ";
        }
    }
    cout << endl;
}

void dao_nguoc_mang(int so_nguyen[], int m){
    cout << "Nhập phần tử thứ trong mảng "<< endl;
    for(int i = 0; i < m;i++){
        cout << "Phần tử thứ: " << i + 1 << " : ";
        cin >> so_nguyen[i];
    }

    cout << "Mảng sau khi đảo ngược " << endl;
    for(int i = 0; i < m;i++){
        int number = so_nguyen[i];
        int last_number, revert = 0;

        while (number != 0)
        {
            last_number = number % 10;
            revert = revert * 10 + last_number;
            number /= 10;
        }
        cout << "Số gốc: " << so_nguyen[i] << " Số đảo ngược: " << revert << endl;
    }
}

void so_min_max(int so_nguyen[], int m){

    int max = so_nguyen[0];
    int min = so_nguyen[0];

    cout << "Nhập phần tử thứ trong mảng " <<endl;
    for(int i = 0; i < m; i++){
        cout << "Phần tử thứ: " << i + 1 << " : ";
        cin >> so_nguyen[i];
    }

    cout << "Mảng dãy số: " <<endl;
    for(int i = 0; i < m;i++){
        cout << so_nguyen[i];
        if(i < m -1){
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
    cout << "Số lớn nhất là: "<< max << endl;
    cout << "Số bé nhất là: "<< min << endl;
}

void bang_cuu_chuong(int batdau, int ketthuc){
    for(int i = batdau ; i <= ketthuc; i++){
        cout << "\nBảng cửu chương " << batdau++ << endl;
            for(int j = 1; j <= 10; j++){
                cout << i <<  " * " << j << " = " << i * j << endl;
        }
    }
}

void hoan_doi_hai_so(int &a, int &b){
    int temp = a;
        a = b;
        b = temp;
}

void mang_hai_chieu_min_max(int so_nguyen[][100], int n, int m){
    cout << "Nhập các phần tử của mảng:\n";
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << "a[" << i << "]" <<  "[" << j << "] = ";
            cin >> so_nguyen[i][j];
        }
    }

    cout << "Mảng vừa nhập: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << so_nguyen[i][j];
            if(j < m -1){
                cout << " , ";
            }
        }
        cout << endl;
    }

    int max = so_nguyen[0][0];
    int min = so_nguyen[0][0];

    for(int i = 0 ;i < n; i++){
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
    int chucnang;
    
    do{
        
        cout << "|-----------Menu-----------|" << endl;
        cout << "|1. Tìm phần tử trong mảng |" << endl;
        cout << "|2. Bubble sort            |" << endl;
        cout << "|3. Đảo ngược mảng         |" << endl;
        cout << "|4. Số min và số max       |" << endl;
        cout << "|5. Bảng cửu chương        |" << endl;
        cout << "|6. Hoán đổi 2 số          |" << endl;
        cout << "|7. Mảng hai chiều min max |" << endl;
        cout << "|0. Thoát                  |" << endl;
        cout << "|-----------Menu-----------|" << endl;
        cout << "Vui lòng chọn chức năng     " << endl;
        cin >> chucnang;

        switch (chucnang)
        {
        case 1:
        {
            int size;
                cout << "Nhập kích thước trong mảng: ";
                cin >> size;
            while (size <= 0)
            {
                cout << "Kích thước của mảng không hợp lệ. Nhập lại: ";
                cin >> size;
                continue;
            }
            int mang[size];
            tim_phan_tu_trong_mang(mang, size);
            break;
        }

        case 2:
        {
            int size;

                cout << "Nhập kích thước của mảng: ";
                cin >> size;
            
            while (size <= 0)
            {
                cout << "Kích thước của mảng không hợp lệ. Nhập lại: ";
                cin >> size;
                continue;
            }
    
            int mang[size];
            bubble_sort(mang, size);
            break;
        }


        case 3:
        {
            int size;
            
            cout << "Nhập kích thước của mảng: ";
            cin >> size;
            while (size <= 0)
            {
                cout << "Kích thước của mảng không hợp lệ. Nhập lại: ";
                cin >> size;
                continue;
            }
            int mang[size];
            dao_nguoc_mang(mang, size);
            break;
        }
    
        case 4:
        {
            int size;

            cout << "Nhập kích thước của mảng: ";
            cin >> size;

            while (size <= 0)
            {
                cout << "Kích thước của mảng không hợp lệ. Nhập lại: ";
                cin >> size;
                continue;
            }
            int mang[size];
            so_min_max(mang, size);
        }

        case 5:
        {
            int batdau,ketthuc;

            cout << "Nhập số bắt đầu: ";
            cin >> batdau;

            cout << "Nhập số kết thúc: ";
            cin >> ketthuc;

            bang_cuu_chuong(batdau,ketthuc);
            break;
            
        }

        case 6:
        {
            int a,b;

            cout << "Nhập số a: ";
            cin >> a;

            cout << "Nhập số b: ";
            cin >> b;

            hoan_doi_hai_so(a,b);
            cout << "Số a và b sau hoán đổi " << "a = " << a << " và " << " b = " << b << endl;
            break;
        }

        case 7:
        {
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
                cout << "Nhập số cột không hợp lệ. Nhập lại: ";
                cin >> m;
            }
            int so_nguyen[100][100];
            mang_hai_chieu_min_max(so_nguyen,n,m);
            break;
        }

        case 0:
        {
            cout << "Thoát chương trình. " << endl;
            exit(0);
            break;
        }
        
        default:
            cout << "Chức năng không hợp lệ vui lòng nhập lại! " << endl;
            break;
        }
    }while (chucnang !=0);
}
