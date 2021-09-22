#include <iostream>
using namespace std;

int binary_search(int[], int, int);
int main()
{
    int n, t, i, j, data, count;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        int a[n];
        for (j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        cin >> data;
        count = binary_search(a, n, data);
        cout << count << endl;
    }
    return 0;
}

int binary_search(int a[], int n, int d)
{
    int mid, l = 0, r = n - 1, count = 0;

    while (l <= r)
    {
        count++;
        mid = (l + r) / 2;
        if (d == a[mid])
        {
            cout << "Present ";
            return count;
        }

        else if (d < a[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << "Not Present ";
    return count;
}
