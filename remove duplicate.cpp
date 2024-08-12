#include <iostream>
#include <set>
#include <vector>

// Function to remove duplicates from an array
int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    std::set<int> unique_elements;
    for (int i = 0; i < n; ++i) {
        unique_elements.insert(arr[i]);
    }

    // Copy unique elements back to the array
    int index = 0;
    for (int element : unique_elements) {
        arr[index++] = element;
    }

    return index;
}

int main() {
    int arr[] = {1, 2, 1, 3, 3, 4, 5, 5, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    std::cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Remove duplicates
    int newLength = removeDuplicates(arr, n);

    // Print the array after removing duplicates
    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Number of unique elements: " << newLength << std::endl;

    return 0;
}
