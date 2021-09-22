   
#include <iostream>
using namespace std;
int main()
{
    int t, n, j, i, key, flag = 0, index, comparison;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        flag = 0;
        comparison = 0;
        cin >> n;
        int a[n];
        for (j = 0; j < n; j++)
            cin >> a[j];

        cin >> key;
        for (j = 0; j < n; j++)
        {
            comparison++;
            if (a[j] == key)
            {
                flag = 1;
                index = j;
                break;
            }
        }
        if (flag == 0)
            cout << endl
                 << "Not Present " << comparison << endl;
        else
        {
            cout << endl
                 << "Present " << comparison << endl;
        }
    }
    return 0;
}
