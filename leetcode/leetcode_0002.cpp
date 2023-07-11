
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode* result = ListNode(0);
        ListNode *r = result;
        int flag = 0;
        while (1) {
            if (l1->next == nullptr && l2->next == nullptr) {
                if (flag != 0) {
                    r->next = ListNode(flag);
                }
                break;
            } else if (l1->next == nullptr && l2->next != nullptr) {
            } else if (l1->next != nullptr && l2->next == nullptr) {
            } else {}
        }
        return result->next;
    }
};
