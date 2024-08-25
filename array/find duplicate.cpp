#include <iostream>

using namespace std;

bool isUnique(int arr[], int n, int num) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count == 1;
}

int main() {
    int n = 6;
    int arr[6] = {1, 1, 2, 3, 4, 3};
    int num;

    cout << "Enter the number to check for uniqueness: ";
    cin >> num;

    if (isUnique(arr, n, num)) {
        cout << num << " is a unique number." << endl;
    } else {
        cout << num << " is a duplicate number." << endl;
    }

    return 0;
}
