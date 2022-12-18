#pragma region Instructions
// 21. Merge Two Sorted Lists

// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

// Constraints:

// The number of nodes in both lists is in the range [0, 50].
// -100 <= Node.val <= 100
// Both list1 and list2 are sorted in non-decreasing order.
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

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        // When other list is null
        // link rest of other list
        if (!list1)
            return list2;
        if (!list2)
            return list1;
        
        // If less than
        if (list1->val < list2->val)
        {
            // link first list
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        // If greater than
        else
        {
            // link second list
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
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
    vector<int> v1 = {1, 3, 5, 7, 9};
    vector<int> v2 = {0, 2, 4, 6, 8};
    
    ListNode* l1 = createList(v1);
    ListNode* l2 = createList(v2);
    printList(l1);
    cout << endl;
    printList(l2);
    cout << endl;
    
    cout << endl;
    Solution s;
    ListNode* l3 = s.mergeTwoLists(l1, l2);
    printList(l3);
    cout << endl;

    return 1;
}

