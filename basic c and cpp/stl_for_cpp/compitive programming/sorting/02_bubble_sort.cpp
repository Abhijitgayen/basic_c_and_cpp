#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    /*repeated swap two adjacent elements in the array if they are in the wrong array*/
    /*there are total n-1 iteration 
     after every iteration the right side there will be sorted element*/

    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << endl;
    }
}