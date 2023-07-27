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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int count=0;

        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        
        if(head==NULL || head->next==NULL){
            return NULL;
        }

        if(count-n==0){
            return head->next;
        }

        curr=head;
        ListNode* prev=head;

        for(int i=0;i<(count-n);i++){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;
        return head;
    }
};