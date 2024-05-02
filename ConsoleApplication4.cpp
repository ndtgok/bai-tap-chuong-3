#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    if (n > MAX_SIZE || n <= 0) {
        cout << "Kich thuoc khong hop le!" << endl;
        return 1;
    }

    int arr[MAX_SIZE];
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int max_value = arr[0];
    int min_value = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }
    cout << "Gia tri lon nhat trong mang la: " << max_value << endl;
    cout << "Gia tri nho nhat trong mang la: " << min_value << endl;


    int sum = 0;
    int tich = 1;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
        tich *= arr[i];
    }
    double average = static_cast<double>(sum) / n;
    cout << "Tong cua mang la: " << sum << endl;
    cout << "Tich cua mang la: " << tich << endl;
    cout << "Gia tri trung binh cua mang la: " << average << endl;

    int count_3 = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 3) {
            count_3++;
        }
    }
    cout << "So 3 xuat hien " << count_3 << " lan trong mang." << endl;


    int demsnt = 0;
    for (int i = 0; i < n; ++i) {
        int num = arr[i];
        bool is_prime = true;
        if (num <= 1) {
            is_prime = false;
        }
        else {
            for (int j = 2; j * j <= num; ++j) {
                if (num % j == 0) {
                    is_prime = false;
                    break;
                }
            }
        }
        if (is_prime) {
            demsnt++;
        }
    }
    cout << "So luong so nguyen to trong mang la: " << demsnt << endl;


    int position;
    cout << "Nhap vi tri can xoa phan tu: ";
    cin >> position;
    if (position < 0 || position >= n) {
        cout << "Vi tri khong hop le!" << endl;
    }
    else {
        for (int i = position; i < n - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        n--;
        cout << "Mang sau khi xoa phan tu: ";
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Mang sau khi sap xep tang dan: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}