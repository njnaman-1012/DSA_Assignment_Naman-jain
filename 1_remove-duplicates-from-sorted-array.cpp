// Problem: Remove Duplicates from Sorted Array
#include <iostream>
using namespace std;
int removeDuplicates(int nums[], int size) {
    if (size == 0)
        return 0;

    int k = 1;
    for (int i = 1; i < size; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
void displayArray(int nums[], int size) {
    if (size == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[100];
    int size = 0;
    int choice;
    int k = 0;
    bool duplicatesRemoved = false;

    do {
        cout << "1. Enter sorted array" << endl;
        cout << "2. Display array" << endl;
        cout << "3. Remove duplicates" << endl;
        cout << "4. Display unique elements" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                cout << "Enter the size of the array: ";
                cin >> size;
                if (size <= 0 || size > 100) {
                    cout << "Invalid size! Please enter between 1 and 100." << endl;
                    break;
                }
                cout << "Enter " << size << " elements (sorted order): ";
                for (int i = 0; i < size; i++) {
                    cin >> nums[i];
                }
                duplicatesRemoved = false;
                cout << "Array stored successfully!" << endl;
                break;
            }
            case 2:
                cout << "Array elements: ";
                displayArray(nums, size);
                break;
            case 3:
                if (size == 0) {
                    cout << "Please enter the array first!" << endl;
                    break;
                }
                k = removeDuplicates(nums, size);
                duplicatesRemoved = true;
                cout << "Duplicates removed successfully!" << endl;
                break;
            case 4:
                if (!duplicatesRemoved) {
                    cout << "Please remove duplicates first!" << endl;
                    break;
                }
                cout << "Number of unique elements: " << k << endl;
                cout << "Unique elements: ";
                displayArray(nums, k);
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}
