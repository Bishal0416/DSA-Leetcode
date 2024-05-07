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
    ListNode* doubleIt(ListNode* head) {
        ListNode *pt = head;
        stack<int> st;
        while(pt != NULL){
            st.push(pt->val);
            pt = pt->next; 
        }

        int carry = 0;
        int num = st.top() * 2;
        st.pop();
        ListNode *ans = new ListNode(num % 10);
        carry = num / 10;


        while(!st.empty()){
            num = st.top()*2;
            if(carry){
                ListNode *NextNode  = new ListNode(num % 10 + carry);
                carry = num / 10;
                NextNode -> next = ans;
                ans = NextNode;
                st.pop();
            }
            else{
                ListNode *NextNode  = new ListNode(num % 10);
                carry = num / 10;
                NextNode -> next = ans;
                ans = NextNode;
                st.pop();
            }
        }
        if(carry){
            ListNode *NextNode  = new ListNode(carry);
            NextNode -> next = ans;
            ans = NextNode;
        }
        return ans;
        
    }
};