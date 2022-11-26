#include <iostream>
using namespace std;

int main()
{
    int a[5] = {4, 5, 3, 1, 2};

    for (int i = 0; i < (sizeof(a) / sizeof(int)) - 1; i++)
    {
        for (int j = i + 1; j < sizeof(a) / sizeof(int); j++)
        {
            if (a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}