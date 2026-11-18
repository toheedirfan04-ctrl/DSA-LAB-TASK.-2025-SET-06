#include <iostream>
using namespace std;

int main() {
    cout << "Roll No: 2025_SET_47" << endl;
    cout << "Lab 3: Insertion of an Element at a Specific Position" << endl;

    int arr[100];
    int n, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter position to insert (1 to " << n + 1 << "): ";
    cin >> pos;

    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    cout << "Enter value to insert: ";
    cin >> value;

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
