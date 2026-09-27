#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e8;
vector<vector<long long>> dist_mat;
int N, E;
void floyd_W()
{
    for (int k = 1; k <= N; k++)
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if (dist_mat[i][k] != INF && dist_mat[k][j] != INF &&
                    dist_mat[i][k] + dist_mat[k][j] < dist_mat[i][j])
                {
                    dist_mat[i][j] = dist_mat[i][k] + dist_mat[k][j];
                }
            }
        }
    }
}

int main()
{
    cin >> N >> E;
    dist_mat.assign(N + 1, vector<long long>(N + 1, INF));

    for (int i = 1; i <= N; i++)
        dist_mat[i][i] = 0;

    for (int i = 0; i < E; i++)
    {
        int A, B;
        long long W;
        cin >> A >> B >> W;

        if (W < dist_mat[A][B])
            dist_mat[A][B] = W;
    };

    floyd_W();

    int Q;
    cin >> Q;
    while (Q--)
    {
        int X,Y;
        cin >> X >> Y;

        if (dist_mat[X][Y] == INF)
            cout << -1 << endl;
        else
            cout << dist_mat[X][Y] << endl;
    }
}