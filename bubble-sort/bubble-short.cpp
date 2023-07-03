#include <iostream>
using namespace std;

// Fungsi untuk melakukan pengurutan secara menurun
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Fungsi untuk mencari nilai menggunakan metode binary search
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}

int main() {
    int arr[] = {34, 12, 56, 78, 6, 43, 32, 20, 90, 50, 89};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Mengurutkan nilai secara menurun
    bubbleSort(arr, size);

    cout << "Nilai setelah diurutkan secara menurun: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int x = 89;
    int result = binarySearch(arr, 0, size - 1, x);

    if (result == -1)
        cout << "Nilai " << x << " tidak ditemukan." << endl;
    else
        cout << "Nilai " << x << " ditemukan pada indeks ke-" << result << "." << endl;

    return 0;
}
