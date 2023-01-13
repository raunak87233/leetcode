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
bool isNodePresent(ListNode *head, ListNode *target) {
    while(head != NULL) {
        if(head == target) {
            return true;
        }
        head = head-> next;
    }
    return false;

}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while (headB != NULL) {
            if (isNodePresent (headA, headB)){
                return headB;
            }
            headB = headB ->next;

        }
        return NULL;
        
    }
};
