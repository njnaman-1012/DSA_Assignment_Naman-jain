// Problem: Merge Two Sorted Linked Lists
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};
ListNode* insertNode(ListNode* head, int value) {
    ListNode* newNode = new ListNode(value);
    if (head == NULL)
        return newNode;

    ListNode* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    return head;
}
void displayList(ListNode* head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* temp = new ListNode(0);
    ListNode* current = temp;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val < list2->val) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    if (list1 != NULL)
        current->next = list1;
    else
        current->next = list2;
    return temp->next;
}

int main() {
    ListNode* list1 = NULL;
    ListNode* list2 = NULL;
    ListNode* mergedList = NULL;

    int choice, value;

    do {
        cout << "1. Insert in List 1" << endl;
        cout << "2. Insert in List 2" << endl;
        cout << "3. Display List 1" << endl;
        cout << "4. Display List 2" << endl;
        cout << "5. Merge Lists" << endl;
        cout << "6. Display Merged List" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert in List 1: ";
                cin >> value;
                list1 = insertNode(list1, value);
                break;

            case 2:
                cout << "Enter value to insert in List 2: ";
                cin >> value;
                list2 = insertNode(list2, value);
                break;

            case 3:
                cout << "List 1: ";
                displayList(list1);
                break;

            case 4:
                cout << "List 2: ";
                displayList(list2);
                break;

            case 5:
                mergedList = mergeTwoLists(list1, list2);
                cout << "Lists merged successfully!" << endl;
                break;

            case 6:
                cout << "Merged List: ";
                displayList(mergedList);
                break;

            case 7:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice!=7);
    return 0;
}
