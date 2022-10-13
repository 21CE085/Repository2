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
    
private:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        
        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        
        return prev;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* curr = reverse(head);
        ListNode* prev = curr;
        ListNode* currHead = curr;
        
        if(n==1){
            currHead = currHead->next;
            head = reverse(currHead);
            return head;
        }
        
        n-=2;
        while(n--){
            prev = curr;
            curr = curr->next;
        }        
    
        curr->next = curr->next->next;
        
        head = reverse(currHead);
        return head;
        
    }
};