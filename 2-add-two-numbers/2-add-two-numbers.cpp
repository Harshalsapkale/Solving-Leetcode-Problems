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
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry = 0) {
    if(!l1 and !l2){
        if(carry){
            return new ListNode(1);
        }
        return NULL;
    }
    
    int v1 = l1? l1->val : 0;
    int v2 = l2? l2->val : 0;
    
    int sum = v1 + v2 + carry;
    ListNode* node = new ListNode(sum%10);
    l1 = l1? l1->next : NULL;
    l2 = l2? l2->next : NULL;
    node->next = addTwoNumbers(l1, l2, sum/10);
    
    return node;
}
};