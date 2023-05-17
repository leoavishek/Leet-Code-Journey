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
    int pairSum(ListNode* head) {
        stack <int> num;
        ListNode *ptr=head;
        while(ptr){
            num.push(ptr->val);
            ptr=ptr->next;
        }
        int i=0,n=num.size(),maxsum=0,sum=0;
        while(i<n/2){
            sum=num.top()+head->val;
            num.pop();
            head=head->next;
            if(sum>maxsum)
                maxsum=sum;
            i++;
        }
        return maxsum;
    }
};