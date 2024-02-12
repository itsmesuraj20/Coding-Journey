class {
    public:
    ListNode* reversell(ListNode* head){

        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL)
        {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr =temp;    
        }
        return prev;
    }
};