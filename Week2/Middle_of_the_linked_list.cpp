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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* temp=head;
        int len=0;
        
            while((temp->next)!=NULL)
            {
                temp=temp->next;
                len++;
            }
            
        temp=head;
        
        len= (len+1)/2;
        int x=0;
        
        while(x!=len)
        {
            temp=temp->next;
            x++;
        }
            
        
        return temp;
        
            
            
    }
};