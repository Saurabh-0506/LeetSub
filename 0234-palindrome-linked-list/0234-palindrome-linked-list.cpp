class Solution {
    private:
    ListNode* getMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head ->next;
        
        while(fast!=NULL && fast-> next !=NULL){
            fast = fast ->next ->next;
            slow = slow -> next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(curr!=NULL){
            next = curr ->next;
            curr ->next = prev;
            prev = curr;
            curr  = next;
        }
        return prev;
    }
public:

    bool isPalindrome(ListNode* head) {

       if(head==NULL|| head->next ==NULL){
            return true;
        } 
        // sttep1: findmiddle
        
        ListNode* middle = getMid(head);
        
        // step 2 -> reverse List after middle
        
       ListNode* temp = middle -> next;
        middle -> next = reverse(temp);
        
        // compare botth halves
        
       ListNode* head1 = head;
       ListNode* head2 = middle ->next;
        
        while(head2!=NULL){
            if(head1 ->val != head2 ->val){
                return false;
            }
            head1 = head1 ->next;
            head2 = head2 ->next;
        }
        // step 4 repeat step 2;
        
        temp = middle -> next;
        middle -> next = reverse(temp);

        return true;
    }
};
