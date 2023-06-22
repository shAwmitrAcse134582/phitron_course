class Solution {
public:
int size(ListNode *&head){
    int cnt=0;
    ListNode *tmp=head;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void delete_head(ListNode *&head){
    ListNode *deleteNode=head;
    head=head->next;
    delete deleteNode;
    // cout<<"deleted Head"<<endl;

}
void  delete_pos(ListNode *head, int pos){
    ListNode *tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    ListNode *deleteNode=tmp->next;
    if(deleteNode->next==NULL){
        tmp->next==NULL;
    }
    tmp->next=tmp->next->next;
    delete deleteNode;

}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      if(head==NULL)
      {
          return head;
      }
        int sz=size(head)-n;
        if(sz==0){
         delete_head(head);
        }
        else{
            delete_pos(head,sz);
        }
        return head;

    }
};