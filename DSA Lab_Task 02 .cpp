#include <iostream>
using namespace std;

int main() {
    cout << "Roll No: 2025_SET_47" << endl;
    cout << "Lab 2: Array Traversal Using Loop" << endl;

    int arr[100];
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
