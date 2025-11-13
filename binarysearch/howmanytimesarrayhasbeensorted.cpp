#include <iostream>
using namespace std;

int rotationCount(int arr[], int n) {
    int start = 0, end = n - 1;

    while (start <= end) {
        
        if (arr[start] <= arr[end]) {
            return start;
        }

        int mid = (start + end) / 2;
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;

        
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
            return mid;
        }

       
        if (arr[mid] >= arr[start]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int rotations = rotationCount(arr, n);
    cout << "Array has been rotated " << rotations << " times." << endl;
    return 0;
}
