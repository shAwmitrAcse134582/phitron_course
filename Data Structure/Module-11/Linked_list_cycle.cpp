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
    bool hasCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fst=head;
        while(fst!=NULL && fst->next!=NULL){
            fst=fst->next->next;
            slow=slow->next;
            if(fst==slow){
                return true;
            }
        }
        return false;
    }
};