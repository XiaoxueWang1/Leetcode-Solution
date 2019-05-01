ListNode *detectCycle(ListNode *head) {
    //24ms
    /*
    map<ListNode*,bool> hash;
    for(ListNode* p=head;p;p=p->next){
        if(hash[p])
            return p;
        hash[p]=true;
    }
    return nullptr;*/
    ListNode* fast=head,*slow=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
            break;
    }
    if(!fast || !fast->next) return nullptr;
    fast=head;
    while(fast!=slow){
        fast=fast->next;
        slow=slow->next;
    }
    return fast;
}
