#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Tukar elemen jika elemen saat ini lebih besar dari elemen berikutnya
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {34, 12, 56, 78, 6, 43, 32, 20, 90, 50, 55, 75, 85, 95, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Data sebelum diurutkan: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, n);

    cout << "\nData setelah diurutkan (ascending): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
