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
    /**
     * Determines whether a given linked list has a cycle.
     * 
     * @param head Pointer to the head of the linked list.
     * @return True if the linked list has a cycle, false otherwise.
     */
    bool hasCycle(ListNode* head) {
        // If the list is empty or has only one element, there can't be a cycle.
        if (head == nullptr || head->next == nullptr) {
            return false;
        }

        // Initialize two pointers: slow and fast.
        ListNode* slow = head;
        ListNode* fast = head;

        // Move slow pointer by one step and fast pointer by two steps.
        // If there's a cycle, eventually they'll meet at some node.
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;       // Move slow pointer by one step.
            fast = fast->next->next; // Move fast pointer by two steps.

            // If slow and fast pointers meet, a cycle is detected.
            if (slow == fast) {
                return true;
            }
        }

        // If the loop terminates without detecting a cycle, return false.
        return false;
    }
};
