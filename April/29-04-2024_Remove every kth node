class Solution {
    public:
    Node* deleteK(Node *head,int k){
        if(k==1)return nullptr;
        
        Node* pre=head;
        Node* curr=head->next;
        
      for(int i=2;curr!=nullptr;i++){
          if(i%k==0){
              pre->next=curr->next;
              curr=curr->next;
          }
          else{
               pre=pre->next;
                curr=curr->next;
          }
      }
      
      return head;
    }
};
