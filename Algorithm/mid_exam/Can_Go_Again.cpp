#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int N, E;
vector<array<long long,3>> edges;
vector<long long> dist_arr;
bool negCycle = false;



void bellmanFord(int src)
{
    dist_arr.assign(N + 1, INF);
    dist_arr[src] = 0;

    for (int i = 1; i <= N - 1; i++)
    {
        bool updated = false;
        for (auto &ed : edges)
        {
            long long A = ed[0], B = ed[1], W = ed[2];
            if (dist_arr[A] != INF && dist_arr[A] + W < dist_arr[B])
            {
                dist_arr[B] = dist_arr[A] + W;
                updated = true;
            }
        }
        if (!updated) break;
    }
}

void checkNegativeCycle()
{
    negCycle = false;
    for (auto &ed : edges)
    {
        long long A = ed[0], B = ed[1], W = ed[2];
        if (dist_arr[A] != INF && dist_arr[A] + W < dist_arr[B])
        {
            negCycle = true;
            break;
        }
    }
}




int main()
{
    cin >> N >> E;
    edges.resize(E);
    for (int i = 0; i < E; i++)
    {
        long long A, B, W;
        cin >> A >> B >> W;
        edges[i] = {A, B, W};
    }
    int src;
    cin >> src;

    bellmanFord(src);
    checkNegativeCycle();

    int t;
    cin >> t;

    if (negCycle)
    {
        for (int i = 0; i < t; i++)
        {
            int D;
            cin >> D;
        }
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    while (t--)
    {
        int D;
        cin >> D;

        if (dist_arr[D] == INF)
            cout << "Not Possible" << endl;
        else
            cout << dist_arr[D] << endl;
    }

}