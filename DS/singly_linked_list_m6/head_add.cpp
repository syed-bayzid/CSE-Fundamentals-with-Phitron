#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        value = val;
        next = NULL;
    }
};

void insert_head(){
    
}

void solve()
{
    Node *head = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);

    head->next = b;
    b->next = c;
    c->next = NULL;

    int head_value = head->value;

    insert_head();
}
int main()
{

    solve();
}