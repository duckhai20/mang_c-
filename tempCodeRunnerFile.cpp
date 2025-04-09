

    while (size <= 0)
    {
        cout << "Kích thước của mảng không hợp lệ. Nhập lại";
        cin >> size;
        continue;
    }
    int myArr[size];
    nhap_mang(myArr, size);
    xuat_mang(myArr, size);
}