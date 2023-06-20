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
   int size(ListNode *head){
       int cnt=0;
       ListNode *tmp=head;
       while(tmp!=NULL){
           cnt++;
           tmp=tmp->next;
       }
       return cnt;
   }
    ListNode* middleNode(ListNode* head) {
        // int sz=size(head);
        // ListNode *tmp=head;
        // for(int i=0;i<sz/2;i++){
        //      tmp=tmp->next;
        // }
        // return tmp;

        //Hare and tortoise algorithm
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<slow->val<<endl;
        return slow;
    }
};