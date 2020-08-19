#include <iostream>
#include <vector>

using namespace std;

struct Node
{
    int val;
    Node *left, *right;
    Node(int val): val{val}, left{nullptr}, right{nullptr}{}
};
Node *makeTree(vector<Node*> &tree, int n)
{

    int leftval;
    int rightval;
    for(int i = 0; i < n; i++)
    {
        leftval = i * 2 + 1;
        rightval = i * 2 + 2;
        if(leftval < n)
            tree[i]->left = tree[leftval];
        if(rightval < n)
            tree[i]->right = tree[rightval];
    }
    return tree[0];
}
int main()
{
   vector<Node*> tree;
   int n, temp;
   cin >> n;
   for(int i = 0; i < n; i++)
   {
       cin >> temp;
       tree.emplace_back(new Node{temp});
   }
    Node *root = makeTree(tree, n);
    return 0;
}
