#include <iostream>
using namespace std;

int main()
{
    int n, d;
    cin >> n;
    int a[n];
    cin >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    d = d % n;
    for (int i = d; i < n; i++)
        cout << a[i] << " ";

    for (int i = 0; i < d; i++)
        cout << a[i] << " ";

    return 0;
}