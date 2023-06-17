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

void reverse(ListNode* &head, ListNode* cur,ListNode* prev){
    if(cur == NULL){
        head = prev;
        return ;
    }
    ListNode* forward = cur-> next;
    reverse(head,forward,cur);
    cur -> next = prev;
}
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        
        if(head == NULL || head-> next == NULL){
            return head;
        }
        else{
            ListNode *prev = NULL;
            ListNode *cur= head;
            reverse(head,cur,prev);
            return head;
        }

        // ListNode *prev = NULL;
        // ListNode *current = head;
        // ListNode *forward = NULL;
        // while(current != NULL){
        //     forward = current->next;
        //     current->next = prev;
        //     prev = current;
        //     current = forward;
        // }
        // return prev;
    }
};
