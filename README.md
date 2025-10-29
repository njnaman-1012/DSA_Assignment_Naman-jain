# DSA_Assignment_Naman-jain
PROBLEM STATEMENT ONE: remove-duplicates-from-sorted-array
Approach :
1.	Since the array is already sorted, all duplicate elements are placed next to each other.
2.	We start from the second element of the array and compare it with the previous element.
3.	If the current element is different from the previous one,
it means we found a new unique number.
•	We place this new number in the next available position in the front part of the array.
•	We then increase our counter k, which keeps track of how many unique numbers we have found so far.
4.	If the current element is the same as the previous one,
we skip it because it is a duplicate.
5.	We continue this process until we reach the end of the array.
6.	At the end, the first k elements of the array will contain all the unique numbers,
and k will tell how many unique numbers are present.

PROBLEM STATEMENT TWO: merge-two-sorted-lists
Approach :
1.	We are given two sorted linked lists — list1 and list2.
2.	We create a temporary node (temp) to help us easily connect nodes while merging.
3.	We also use a pointer (current) that will move along the new merged list as we attach nodes.
4.	We compare the values of the current nodes from both lists:
•	If the value in list1 is smaller, we attach that node to our new merged list and move ahead in list1.
•	If the value in list2 is smaller, we attach that node and move ahead in list2.
•	If both values are equal, we can take either one first, then the other — both will stay in sorted order.
5.	We repeat this process until one of the lists becomes empty.
6.	If any nodes are still left in one of the lists, we attach the remaining part to the end of the merged list.
