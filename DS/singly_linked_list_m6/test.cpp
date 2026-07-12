#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

void solve()
{
    Node a, b, c;
    a.value = 1;
    b.value = 2;
    c.value = 3;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.next->next << endl;
    cout << a.next->next->value << endl;
}

int main()
{

    solve();
}