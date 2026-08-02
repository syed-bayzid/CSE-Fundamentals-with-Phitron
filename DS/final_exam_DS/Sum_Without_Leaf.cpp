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
Node *build_tree()
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
}

int sumWithoutLeaf(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }

    int sum = root->val;

    sum += sumWithoutLeaf(root->left);
    sum += sumWithoutLeaf(root->right);

    return sum;
}

    int main()
    {

        Node *root = build_tree();

        cout << sumWithoutLeaf(root) << endl;
    }