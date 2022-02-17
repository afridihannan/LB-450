//https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1
#include<bits/stdc++.h>
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

//TLE
vector<int> leftView2(Node *root)
{
   // Your code here
   vector<int>ans;
   queue<Node*>q;
   q.push(root);
   q.push(NULL);
   while(!q.empty()){
       Node* head=q.front();
       q.pop();
       if(head!=NULL){
           if(head->right){
              q.push(head->right);
           }
           if(head->left){
              q.push(head->left);
           }
           if(q.front()==NULL){
               ans.push_back(head->data);
           }
       }else if(!q.empty()){
           q.push(NULL);
       }
   }
   return ans;
}

//lavel order traversal
//optimised
void recur(Node* root,int level,vector<int>&res){
    if(root==NULL)return;
    if(res.size()==level)res.push_back(root->data);
    recur(root->left,level+1,res);
    recur(root->right,level+1,res);
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   recur(root,0,ans);
   return ans;
}
int main(){
  
return 0;
}