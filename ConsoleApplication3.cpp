#include<iostream>
using namespace std;
/*long n, i, j, m;

int main()

{
	cin >> n >> m;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (i == 1 || j == 1 || i == n || j == m) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	return 0;
}
*/
/*
int main() {
    int n;
    cout << "Nhap chieu cao cua tam giac: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
*/
/*
int main() {
    int n;
    cout << "Nhap chieu cao cua tam giac: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
*/
/*
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    cout << "Cac so nguyen to tu 1 den " << n << " la:" << endl;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
*/
/*
int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}
*/
/*
int main() {
    int n, sodaonguoc = 0;

    cout << "Nhap vao mot so nguyen n: ";
    cin >> n;

    // Tạo số đảo ngược của n
    while (n != 0) {
        int so = n % 10;
        sodaonguoc = sodaonguoc * 10 + so;
        n /= 10;
    }

    cout << "So dao nguoc cua " << n << " la: " << sodaonguoc << endl;

    return 0;
}
*/
/*
#include <iomanip>
#include <cmath>
int main() {
    int n;
    double S = 0.0;

    cout << "Nhập vào số nguyên n: ";
    cin >> n;

    // Tính tổng S
    for (int i = 1; i <= n; ++i) {
        S += 1.0 / pow(i, 3);
    }

    // In kết quả với 5 chữ số thập phân
    cout << "Giá trị của biểu thức S là: " << fixed << setprecision(5) << S << endl;

    return 0;
}
*/