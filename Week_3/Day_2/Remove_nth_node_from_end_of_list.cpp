/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(n == len){
            return head->next;
        }
        if(len==1){
            return NULL;
        }
        int l=len-n-1;
        temp=head;
        while(l>0 && temp!=NULL){
            temp=temp->next;
            l--;
        }
        temp->next=temp->next->next;
        return head;
    }
};
