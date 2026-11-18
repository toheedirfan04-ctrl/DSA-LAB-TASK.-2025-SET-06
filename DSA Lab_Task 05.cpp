#include <iostream>
using namespace std;

int main() {
    cout << "Roll No: 2025_SET_47" << endl;
    cout << "Lab 5: Linear Search Algorithm" << endl;

    int arr[100];
    int n, key;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element " << key << " found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}
