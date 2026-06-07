#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int B[N], j = 0;

    for (int i = 0; i < N; i++)
    {
        if ( A[i] <= K )
        {
            B[j] = A[i];
            j++;
        }
    }
    int temp = B[0];
    if (j == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        for (int i = 1; i < j; i++)
        {
            temp = max(temp, B[i]);
        }
        cout << temp << endl;
    }
    return 0;
}