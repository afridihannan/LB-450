// https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    // Function to return list containing elements of right view of binary tree.
    void recur(Node *root, int level, vector<int> &res)
    {
        if (root == NULL)
            return;
        if (res.size() == level)
            res.push_back(root->data);
        recur(root->right, level + 1, res);
        recur(root->left, level + 1, res);
    }
    vector<int> rightView(Node *root)
    {
        // Your code here
        vector<int> ans;
        recur(root, 0, ans);
        return ans;
    }
};
int main()
{

    return 0;
}