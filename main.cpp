#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b, c, d;
        cin >> b >> c >> d;
        int all = (max(c, b) - min(c, b)) * 2;
        int result = d + all / 2;
        bool can = true;
        if (d > all)
        {
            can = false;
        }
        else if (result == b || result == c)
        {
            can = false;
        }
        else if (b>all||c>all)
        {
            can=false;
        }
        if (can == true)
        {
            if (result>all)
            {
                result-=all;
            }
            
            cout << result << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}