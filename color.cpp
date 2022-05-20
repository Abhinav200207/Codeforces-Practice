#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    vector<int> v(m + 1, 0);
    vector<vector<int>> matrix(n + 1, v);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    
}