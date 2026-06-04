#include <iostream>
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

    for (int i = 0; i <= N - 2; i++)
    {
        for (int j = 0; j <= N - 2 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
}