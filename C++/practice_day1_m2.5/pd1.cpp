#include <bits/stdc++.h>
using namespace std;

int *get_array(int N)
{
    int *A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    return A;
}

int main()
{
    int N;
    cin >> N;
    int *result = get_array(N);
    for (int i = 0; i < N; i++)
    {
        cout << result[i] << " ";
    }
    delete[] result;
}