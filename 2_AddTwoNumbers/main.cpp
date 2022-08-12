#include <iostream>

typedef struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}

}   ListNode;

int main()
{
    // ListNode n1(1);
    // ListNode n2(2);
    printf("Hi");
    std::cout << std::endl;
    return 0;
}