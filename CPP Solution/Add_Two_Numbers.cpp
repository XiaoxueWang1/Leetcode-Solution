/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* r = result;
        ListNode* p=l1;
        ListNode* q=l2;
        int a = 0,b = 0;
        ListNode* r1;
        for(;p!=NULL||q!=NULL;p=p->next,q=q->next){
            r1 = new ListNode(b);
            r->next = r1;
            if(p==NULL) p = new ListNode(0);
            else if(q==NULL) q = new ListNode(0);
            a = p->val+q->val+r1->val;
            if(a>=10)
                b=1;
            else b=0;
            a = a%10;
            r1->val = a;
            r = r1;
        }
        if(b!=0) r1 = new ListNode(b);
        else r1=NULL;
        r->next = r1;
        result = result->next;
        return result;
    }
};
