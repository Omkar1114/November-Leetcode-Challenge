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
    int getDecimalValue(ListNode* head) {
        vector<int> x;
        int num=0,i=0;
        ListNode* ptr = head;
        while(ptr != nullptr){
            x.push_back(ptr->val);
            ptr = ptr->next;
        }
        for(auto it=x.rbegin();it!=x.rend();it++,i++){
            num = num + *it * pow(2,i);
        }
        return num;
    }
};
