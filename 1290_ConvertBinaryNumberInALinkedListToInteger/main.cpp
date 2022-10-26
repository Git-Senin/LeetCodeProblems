#pragma region Instructions
// 1290. Convert Binary Number in a Linked List to Integer

// Given head which is a reference node to a singly-linked list.
// The value of each node in the linked list is either 0 or 1.
// The linked list holds the binary representation of a number.

// Return the decimal value of the number in the linked list.

// The most significant bit is at the head of the linked list..

// Constraints:

// The Linked List is not empty.
// Number of nodes will not exceed 30.
// Each node's value is either 0 or 1.
#pragma endregion

#include <iostream>
#include <vector>
#include <cmath>
using std::vector;
using std::cout;
using std::endl;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void reverseList(ListNode *current, vector<int> &v)
    {
        if (current == nullptr) {   // if pointing to null return
            return;
        } 
        reverseList(current->next, v); // recursion
        v.push_back(current->val);  // pushes value to the back

        // while (current != NULL)
        // {
        //     v.push_back(current->val);
        //     current = current->next;
        // }
    }

    int getDecimalValue(ListNode *current) 
    {
        int total = 0;  // return value
        int base = 0;   // base for exponent
        vector<int> v;  // Vector that hold values separately

        reverseList(current, v);    // write node values reverse in vector 

        for(auto i : v)
        {
            total *= i * pow(2, base);   // n * 2^base added to total
            base++;                      // increment base
        }

        return total;
    }


};

int main()
{

    ListNode* head = NULL;
    ListNode* l1 = NULL;    
    ListNode* l2 = NULL;    
    ListNode* l3 = NULL;    
    ListNode* l4 = NULL;    
    ListNode* l5 = NULL;    
    ListNode* l6 = NULL;    
    ListNode* l7 = NULL;    
    ListNode* l8 = NULL;    
    ListNode* l9 = NULL;    
    ListNode* l10 = NULL;    
    ListNode* l11 = NULL;    
    ListNode* l12 = NULL;    
    ListNode* l13 = NULL;    
    ListNode* l14 = NULL;    
    ListNode* l15 = NULL;    

    l15 = new ListNode(0);
    l14 = new ListNode(0,l15);
    l13 = new ListNode(0,l14);
    l12 = new ListNode(0,l13);
    l11 = new ListNode(0,l12);
    l10 = new ListNode(0,l11);
    l9 = new ListNode(0,l10);
    l8 = new ListNode(1,l9);
    l7 = new ListNode(1,l8);
    l6 = new ListNode(1,l7);
    l5 = new ListNode(0,l6);
    l4 = new ListNode(0,l5);
    l3 = new ListNode(1,l4);
    l2 = new ListNode(0,l3);
    l1 = new ListNode(0,l2);
    head = new ListNode(1,l1);

    Solution s;
    int x = s.getDecimalValue(head);
    return 0;
    
}