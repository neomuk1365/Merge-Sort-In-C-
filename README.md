# Merge-Sort-In-C++
The merge sort technique is based on divide and conquer technique. We divide the while data set into smaller parts and merge them into a larger piece in sorted order.
It is also very effective for worst cases because this algorithm has lower time complexity for worst case also.
The complexity of Merge Sort Technique

    Time Complexity: O(n log n) for all cases

    Space Complexity: O(n)
    Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, 
    and then it merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, l, m, r) is a 
    key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.
