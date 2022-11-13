#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    int a;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Gia tri cua a la: " << a << endl;
    cout << typeid(a).name() << endl; // i
    cout << INT_MAX << endl;          // 2147483648
    cout << INT_MIN << endl;          // -2147483647
    cout << LLONG_MAX << endl;        // 9223372036854775807
    cout << LLONG_MIN << endl;        // -9223372036854775807
    cout << sizeof(bool) << endl;     // 1
    return 0;
}
// n bit => -2^(n - 1) -> 2^(n - 1) -1
// So nguyen:
// int: 4byte = 32 bit: -2^-31 -> 2^-31 - 1
// long long: 8byte = 64bit: -2^63 -> 2^63 - 1
// unsigned int: 0 -> 2^32 -1
// unsigned long long: 0 -> 2^64 - 1
// So thuc:
// float: 4byte
// double: 8 byte
// char : 1 byte: 0 -> 256
// bool : 1byte -> true, false