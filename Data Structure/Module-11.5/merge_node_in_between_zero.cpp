
class Solution {
public:
ListNode *tmp;
ListNode *head3=NULL;
ListNode*insert_Node(int val){ 
   ListNode *newNode=new ListNode(val);
   if(head3==NULL){
       
       head3=newNode;
       tmp=head3;
       return head3;
   }
   
//    while(tmp!=NULL){
//        tmp=tmp->next;
//    }
    
   tmp->next=newNode;
   tmp=newNode;
   return head3;

}
    ListNode* mergeNodes(ListNode* head) {
        ListNode *head2;
         ListNode *tmp=head->next;
         int sum=0;
         while(tmp!=NULL){
             if(tmp->val!=0){
                 sum+=tmp->val;
                 
             }
             else{
               head2= insert_Node(sum);
               sum=0;
             }
             tmp=tmp->next;
         }
         return head3;
       
    }
};