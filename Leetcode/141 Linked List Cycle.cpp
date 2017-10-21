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
    bool hasCycle(ListNode *head) {
        ListNode* p1=head,*p2=head;
        if (head==NULL||head->next==NULL)return false;
        while(p2!=NULL&&p2->next!=NULL){//why it should be p2&&p2->next?why cannnot be p1&&p2->next
            p1=p1->next;
            p2=p2->next->next;
            if(p1==p2)
                return true;
        }
        return false;
        
    }
};
