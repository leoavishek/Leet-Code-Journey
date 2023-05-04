#include<iostream>
struct ListNode {
   int val;
   ListNode *next;

};
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr=head;
        while(head && head->next){
            if(head->val==head->next->val)
                head->next=head->next->next;
            else
                head=head->next;
        }
        return ptr;
    }
};
using namespace std;
int main()
{
    return 0;
}