#include <iostream>
#include <algorithm>
using namespace std;  
int main() {
    int a, b;
    cin >> a >> b;
    // int minVal = min(a, b);
    // cout << "Minimum: " << minVal << endl;

    // int maxVal = max(a, b);
    // cout << "Maximum: " << maxVal << endl;


    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}  