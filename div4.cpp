#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s1 = "Timur";
        vector<int> v1(27,0);
        for (int i = 0; i < s1.length(); i++){
            v1[s1[i] - 'a']++;
        }
        if (s.length() > 5){
            cout << "NO" << endl;
        }else{
            
        }
    }
}