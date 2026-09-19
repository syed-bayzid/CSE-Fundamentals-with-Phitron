#include<bits/stdc++.h>
using namespace std;

bool vis[100][100];
int level_[100][100];
vector<pair<int, int>> d = {{1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}};
int N, M;

bool valid(int i, int j)

{
    if(i<0 || i>=N || j<0 || j>=M)
        return false;
    return true;
}

void bfs(int Ki, int Kj){


    queue<pair<int,int>> q;
    q.push({Ki,Kj});
    vis[Ki][Kj] = true;
    level_[Ki][Kj] = 0;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for(int i=0;i<8;i++)
        {


            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj])
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                level_[ci][cj] = level_[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        cin >> N >> M   ;

        int Ki, Kj;j
        cin >> Ki >> Kj;

        int Qi, Qj;
        cin >> Qi >> Qj;


        memset(vis,false,sizeof(vis));
        memset(level_,-1,sizeof(level_));
        bfs(Ki,Kj);
        cout << level_[Qi][Qj] << endl;
    }
    return 0;
}