
class Solution {
public:
int size(ListNode *&head){
    ListNode *tmp=head;
    int cnt=0;
    while(tmp!=0){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
    ListNode* swapNodes(ListNode* head, int k) {
        int sz=size(head);
        int sz2=sz-k+1;
        ListNode *tmp1=head;
        for(int i=1; i<=k-1;i++){
            tmp1=tmp1->next;
        }
        ListNode *tmp2=head;
        for(int j=1;j<=sz2-1;j++){
             tmp2=tmp2->next;
        }
        swap(tmp1->val,tmp2->val);
        cout<<tmp1->val<<" "<<tmp2->val;
        return head;
    }
};