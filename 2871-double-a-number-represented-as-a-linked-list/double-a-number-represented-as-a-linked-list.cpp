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
    ListNode* doubleIt(ListNode* head) {
        ListNode* prev = NULL;
        if(head -> val >= 5){
            head = new ListNode(0,head);
            prev = head;
        }
        for(ListNode* curr = head;curr; prev = curr , curr = curr -> next){
            if(curr -> val >= 5){
                prev -> val++;
                curr -> val = curr -> val*2-10;
            }else{
                curr->val *=2;
            }
        }
        return head;
    }
};