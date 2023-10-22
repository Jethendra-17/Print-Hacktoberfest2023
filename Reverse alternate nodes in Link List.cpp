/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
    Node*reverse(Node*head) {
        if(!head or !head->next) {
            return head;
        }
        Node*smallHead = reverse(head->next);
        Node*temp = head;
        temp->next->next = head;
        temp->next = NULL;
        return smallHead;
    }
    void rearrange(struct Node *odd)
    {
        //add code here
         Node*first = odd;
        Node*second = odd->next;
        Node*temp = odd->next;
        while(first->next and second->next) {
            first->next = first->next->next;
            first = first->next;
            second->next = second->next->next;
            second = second->next;
        }
 
        // second = reverse(second);
        first->next = reverse(temp);
        
    }
};
