#include <bits/stdc++.h>
using namespace std;

void solve()
{
    list<string> l;
    string s;

    while (cin >> s && s != "end")
    {
        l.push_back(s);
    }

    int Q;
    cin >> Q;
    auto now = l.begin();

    for (int i = 0; i < Q; i++)
    {
        string query;
        cin >> query;

        if (query == "visit")
        {
            string address;
            cin >> address;

            bool found = false;

            for (auto i = l.begin(); i != l.end(); i++)
            {
                if (*i == address)
                {
                    now = i;
                    cout << *now << endl;
                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (query == "next")
        {
            auto temp = now;
            temp++;

            if (temp != l.end())
            {
                now++;
                cout << *now << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (query == "prev")
        {
            if (now != l.begin())
            {
                now--;
                cout << *now << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

}

int main()
{

    solve();
}