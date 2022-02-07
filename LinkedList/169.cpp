// Merge k sorted list
#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
//Method 1
//sorting in an array
//Time ->O(Nlog(N)) Space->O(N)
ListNode* mergeKLists1(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0)return NULL;
        ListNode* head=new ListNode();
        ListNode* temp=head;
        vector<int>valu;
        for(auto list:lists){
            while(list!=NULL){
                valu.push_back(list->val);
                list=list->next;
            }
        }
        sort(valu.begin(),valu.end());
        for(int val:valu){
            temp->next=new ListNode(val);
            temp=temp->next;
        }
        return head->next;
    }

// Method 2
// Comparing the first values of all linkedlist and putting the minimial
// Time->O(N*K) N is the no of nodes and K is the size of the array
//Space->O(N) i.e array of pointers
ListNode* mergeKLists2(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0)return NULL;
        ListNode* head=new ListNode();
        ListNode* temp=head;

        while(true){
            int p=0;
            for(int i=0;i<n;i++){
                if((lists[p]==NULL)||(lists[i]!=NULL && lists[i]->val>lists[p]->val)){
                    p=i;
                }
            }
            if(lists[p]==NULL){
                break;
            }
            temp->next=lists[p];
            temp=temp->next;
            lists[p]=lists[p]->next;
        }
        return head->next;
    }

// Divide and conquer MERGE SORT
/*
Time Complexity :- BigO(N * log(K)) where N is no of nodes we have when we are merging 2 lists together. ANd log of K portion comes from our recursive func. getMid. K is the no. of recursive call that we going to have to make.
sPACE COMPLEXITY:- O(K) stack used during recursion
*/
ListNode* merge(ListNode* left,ListNode* right){
    ListNode* head=new ListNode();
    ListNode* temp=head;

    while(left!=NULL && right!=NULL){
        if(left->val<right->val){
            temp->next=left;
            temp=temp->next;
            left=left->next;
        }else{
            temp->next=right;
            temp=temp->next;
            right=right->next;
        }
    }
    while(left!=NULL){
        temp->next=left;
        temp=temp->next;
        left=left->next;
    }
    while(right!=NULL){
        temp->next=right;
        temp=temp->next;
        right=right->next;
    }
    return head->next;
}
ListNode* getMid(vector<ListNode*>&lists,int left,int right){
    if(left==right)return lists[left];
    int mid=(left+right)/2;

    ListNode* l=getMid(lists,left,mid);
    ListNode* r=getMid(lists,mid+1,right);

    return merge(l,r);
}
ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0)return NULL;
        return getMid(lists,0,n-1);
    }
int main(){
  
return 0;
}