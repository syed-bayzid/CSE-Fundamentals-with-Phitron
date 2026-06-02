#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    
    int mx = A;
    if(B > mx) {mx = B;}
    if(C > mx) {mx = C;}

    int min = A;
    if(B < min) {min = B;}
    if(C < min) {min = C;}
        
    
    cout << min << " " << mx << endl;
}