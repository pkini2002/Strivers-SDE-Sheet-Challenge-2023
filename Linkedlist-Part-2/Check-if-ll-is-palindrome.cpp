/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
    vector<int>nodes;
    ListNode* curr=head;

    while(curr!=NULL){
        nodes.push_back(curr->val);
        curr=curr->next;
    }

    vector<int>second;
    int n=nodes.size();

    for(int i=0;i<nodes.size();i++){
        second.push_back(nodes[n-1-i]);
    }

    for(int i=0;i<second.size();i++){
        if(nodes[i]!=second[i]){
            return false;
        }
    }
    return true;
    }
};