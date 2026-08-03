#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* build_tree()
{
    int val;
    cin >> val;

    if (val == -1)
    {
        return NULL;
    }

    Node *root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *MyLeft = NULL;
        Node *MyRight = NULL;

        if (l != -1)
        {
            MyLeft = new Node(l);
        }

        if (r != -1)
        {
            MyRight = new Node(r);
        }

        f->left = MyLeft;
        f->right = MyRight;

        if (f->left != NULL)
        {
            q.push(f->left);
        }

        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }

    return root;
};



int get_max_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_h = get_max_height(root->left);
    int right_h = get_max_height(root->right);

    return max(left_h, right_h) + 1;
};
int count_nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l + r + 1;
};
int main()
{
    Node *root = build_tree();
    int height = get_max_height(root);

    int expected = (1 << height) - 1;

    int nodes = count_nodes(root);
    if (nodes == expected)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}