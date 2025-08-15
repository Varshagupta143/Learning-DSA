//brute force solution 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int>mpp;
        ListNode *temp = head ;
        while(temp)
        {
            if(mpp.find(temp)!=mpp.end())
            return true ;
            mpp[temp]=1;
            temp=temp->next;
        }
        return false ;
    }
};
// time complexity - O(n)
// sc - O(N)

//optimsed solution 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head ;
        ListNode*slow = head;
        while(fast!=nullptr && fast -> next!=nullptr)
        {
            fast=fast->next->next;
            slow = slow->next;
            if(fast==slow)
            return true ;
        }
        return false ;
    }
};
// time complexity - O(n)
// sc - O(1)

