#pragma region Instructions
// 206. Reverse Linked List

// Given the head of a singly linked list, reverse the list, and return the reversed list.

//Constraints:

//The number of nodes in the list is the range [0, 5000].
//-5000 <= Node.val <= 5000
#pragma endregion

#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <unordered_map>
#include <vector>
#include <array>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::array;
using std::string;


struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        if (!head || !(head->next))    // on last node
            return head;

        ListNode* new_head = reverseList(head->next); // returns head only on (!head->next)
        
        ListNode* node = head->next; // get tail
        node->next = head;           // link tail to new tail
        head->next = nullptr;        // clear head link
        
        return new_head; // returns the new head
    }
};

ListNode* createList(std::vector<int> arr) {
    ListNode* head = new ListNode;
    ListNode* current = head;

    for (int i = 0; i < arr.size(); i++) {
        current->val = arr[i];

        if (i < arr.size() - 1)
        {
            current->next = new ListNode();
            current = current->next;
        }
        else
        {
            current->next = nullptr;
        }
    }

    return head;
}
void printList(ListNode* head)
{
    ListNode* current = head;
    while (current != nullptr)
    {
        std::cout << current->val << " ";
        current = current->next;
    }
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    Solution s1;
    printList(s1.reverseList(createList(v1)));
    cout << endl;
    
    return 0;
}

