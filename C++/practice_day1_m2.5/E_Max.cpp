#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int mx = A[0];
    for(int i = 0; i<N ; i++){
        if(A[i] > mx ){
            mx = A[i];
        }
    }
    cout << mx << endl;
}