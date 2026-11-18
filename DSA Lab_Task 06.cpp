#include <iostream>
using namespace std;

int main() {
    cout << "Roll No: 2025_SET_47" << endl;
    cout << "Lab 6: Binary Search Algorithm" << endl;

    int arr[100];
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Binary search needs a sorted array, so sort it first (ascending)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            result = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (result != -1) {
        cout << "Element " << key << " found at position " << result + 1 << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}
