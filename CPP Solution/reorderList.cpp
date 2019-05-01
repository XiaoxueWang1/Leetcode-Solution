void reorderList(ListNode* head) {
    if(!head) return;
    vector<ListNode*> v;
    ListNode* p;
    for(p=head;p;p=p->next)
        v.push_back(p);
    int i=1,j=v.size()-1;
    p=head;
    while(i<=j){
        p->next=v[j--];
        p=p->next;
        if(i<=j){
            p->next=v[i++];
            p=p->next;
        }
    }
    p->next=NULL;
}
