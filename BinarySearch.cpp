#include<iostream>

// Function to perform binary search (assuming the array is sorted)
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Return the index where the target is found
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = {5, 12, 25, 30, 42, 55, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}
