#include <iostream>
using namespace std;


int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int bndry;
        if (n % 2 == 0)
        {
            bndry = (n / 2);
        }
        else
        {
            bndry = (n / 2);
            bndry++;
        }
        if (k <= bndry)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (j == i && i % 2 == 0 && k > 0)
                    {
                        cout << "R";
                        k--;
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                cout << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}