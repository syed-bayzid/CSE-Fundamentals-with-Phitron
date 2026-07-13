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

void sizeCheck(Node *head)
{
    int count = 0;
    Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    cout << "Size of the linked list: " << count << endl;
}

int main()
{
Node *head = new Node(19);
Node *b = new Node(23);
Node *c = new Node(33);
Node *d = new Node(45);
head->next = b;
b->next = c;
c->next = d;
    sizeCheck(head);

}