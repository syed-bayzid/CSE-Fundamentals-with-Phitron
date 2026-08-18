#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); //if say the graph is undirected
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Vertex " << i << ": ";
        for (int j = 0; j < adj_list[i].size(); j++)
        {
            cout << adj_list[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
        {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    solve();
}