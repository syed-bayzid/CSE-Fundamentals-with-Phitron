#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        stack<char> st;

        for (char ch : s)
        {
            if (st.empty())
            {
                st.push(ch);
            }
            else if ((st.top() == '0' && ch == '1') ||
                     (st.top() == '1' && ch == '0'))
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }

        if (st.empty())
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