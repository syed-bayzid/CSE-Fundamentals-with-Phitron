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

void sizeCheck(Node *head, int &count)
{
    count = 0;
    Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
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

    int count;
    sizeCheck(head, count);

    if (count % 2 == 0)
    {
        int mid = count / 2;
        cout<< "Theon: " << mid << endl;
    }
    else
    {
        float mid = count / 2.0;
        cout<< "Theon: " << mid << endl;
    }
}