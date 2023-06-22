
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
         if(head==NULL){
             return head;
         }
         ListNode *tmp=head;
         while(tmp != NULL && tmp->val == val){
             tmp=tmp->next;
            //  cout<<tmp->next->val<<endl;
         }
         ListNode *prsnt=tmp;
         while(prsnt!=NULL && prsnt->next!=NULL){
             if(prsnt->next->val==val){
                    prsnt->next=prsnt->next->next;
             }
             else{
                 prsnt=prsnt->next;
             }
            
         }
         return tmp;

    }
};