#include<bits/stdc++.h>
using namespace std;

int* fun(){
    int *a = new int[7];
    for(int i=0; i<7; i++){
        cin >> a[i];
    }
    return a;
}

int main(){
    int *a = fun();
    for(int i=0; i<7; i++){
        cout << a[i] << " ";
    }
}