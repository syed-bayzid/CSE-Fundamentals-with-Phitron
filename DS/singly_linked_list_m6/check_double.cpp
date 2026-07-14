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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}

void checkDouble(Node *head)
{

    print(head);
}

int main()
{
Node *head = new Node(19);
Node *b = new Node(23);
Node *c = new Node(33);
Node *d = new Node(45);
Node *e = new Node(23);

head->next = b;
b->next = c;
c->next = d;
d->next = e;
    checkDouble(head);

}