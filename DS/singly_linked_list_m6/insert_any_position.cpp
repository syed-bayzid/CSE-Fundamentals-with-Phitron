
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


void insert_any_position(Node *&head, int val, int pos)
{
  Node *newNode = new Node(val);
  Node *temp = head;
  for(int i=1; i<pos ; i++){
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;  
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
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

    insert_any_position(head, 1080, 2);

    print(head);
}
int main()
{

    solve();
}