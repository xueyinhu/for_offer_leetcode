
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// class Solution {
// public:
//     ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
//         ListNode* result = ListNode(0);
//         ListNode *r = result;
//         int flag = 0;
//         while (1) {
//             if (l1->next == nullptr && l2->next == nullptr) {
//                 if (flag != 0) {
//                     r->next = ListNode(flag);
//                 }
//                 break;
//             } else if (l1->next == nullptr && l2->next != nullptr) {
//             } else if (l1->next != nullptr && l2->next == nullptr) {
//             } else {}
//         }
//         return result->next;
//     }
// };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = nullptr, *tail = nullptr;
        int carry = 0;
        while (l1 || l2) {
            int n1 = l1 ? l1->val: 0;
            int n2 = l2 ? l2->val: 0;
            int sum = n1 + n2 + carry;
            if (!head) {
                head = tail = new ListNode(sum % 10);
            } else {
                tail->next = new ListNode(sum % 10);
                tail = tail->next;
            }
            carry = sum / 10;
            if (l1) {
                l1 = l1->next;
            }
            if (l2) {
                l2 = l2->next;
            }
        }
        if (carry > 0) {
            tail->next = new ListNode(carry);
        }
        return head;
    }
};
