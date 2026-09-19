#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> movement = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
    int cnt = 0;
vector<int> vv;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
int cnt2 = 0;
void dfs(int si, int sj)
{
    cnt2++;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + movement[i].first;
        int cj = sj + movement[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && vis[i][j] == false)
            {
                cnt++;

                cnt2 = 0;
                dfs(i, j);
                // cout << "Area of component " << cnt << ": " << cnt2 << endl;
                vv.push_back(cnt2);
            }
        }
    }

    if (vv.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        int minArea = vv[0];
        for (int i = 1; i < vv.size(); i++)
        {
            if (vv[i] < minArea)
            {
                minArea = vv[i];
            }
        }
        cout << minArea << endl;
    }

    return 0;
}