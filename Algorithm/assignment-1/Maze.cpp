#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // right, left, up, down
int N, M;

bool valid(int i, int j)
{
    if (i < 0 || i >= N || j < 0 || j >= M)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
                parent[ci][cj] = {par_i, par_j};
            }
        }
    }
}

int main()
{
    cin >> N >> M;
    int si, sj, di, dj;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    bfs(si, sj);
`
    if (vis[di][dj])
    {
        int dr = di, dc = dj;
        while (1)
        {
            pair<int, int> par = parent[dr][dc];
            dr = par.first;
            dc = par.second;
            if (dr == -1 && dc == -1)
                break;
            if (grid[dr][dc] != 'R')
                grid[dr][dc] = 'X';
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << grid[i][j];
        cout << endl;
    }

    return 0;
}