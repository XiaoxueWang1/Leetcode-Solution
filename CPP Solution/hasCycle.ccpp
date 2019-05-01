bool hasCycle(ListNode *head) {
    //map解法 空间O(n) 24ms
    /*
    map<ListNode*,bool> hash;
    for(ListNode* p=head;p;p=p->next){
        if(hash[p])
            return true;
        hash[p]=true;
    }
    return false;*/

    //快慢指针 空间O(1) 12ms
    ListNode* fast=head,*slow=head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow) return true;
    }
    return false;
}
