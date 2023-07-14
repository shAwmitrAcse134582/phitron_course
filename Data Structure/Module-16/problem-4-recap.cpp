#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        queue <char> q;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'A' && q.front() == 'B')
            {
                q.pop();
            }
            else if(s[i] == 'B' && q.front() == 'A')
            {
                q.pop();
            }
            else
            {
                q.push(s[i]);
            }
        }

        if(q.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
