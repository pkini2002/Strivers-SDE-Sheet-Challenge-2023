/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         unordered_set<ListNode*>s;

         ListNode *l1=headA;
         ListNode *l2=headB;

         while(l1){
             s.insert(l1);
             l1=l1->next;
         }

         while(l2){
             if(s.find(l2)!=s.end()){
                 return l2;
             }
             l2=l2->next;
         }
         return NULL;
    }
};