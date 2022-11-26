#include <iostream>
#include <stdlib.h>
using namespace std;
void deleteElement(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        while (a[i] % 2 == 0)
        {
            for (int j = i; j < n; j++)
                a[j] = a[j + 1];
            n--;
        }
    }
}
void insertElement(int a[], int &n, int vt, int val)
{
    n++;
    for (int i = n - 1; i > vt; i--)
    {
        a[i] = a[i - 1];
    }
    a[vt + 1] = val;
}
void print(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int *a;
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    // deleteElement(a, n);
    int vt, val;
    cout << "Nhap vi tri can chen: ";
    cin >> vt;
    cout << "Nhap gia tri can chen: ";
    cin >> val;
    insertElement(a, n, vt, val);
    print(a, n);
    return 0;
}