#include <iostream>
#include <vector>
using namespace std;

vector<int> searchAndCount(int arr[], int n, int target)
{
    vector<int> positions;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
            positions.push_back(i + 1); // Menambahkan posisi (indeks + 1) data yang ditemukan
        }
    }

    cout << "Banyaknya kemunculan data " << target << " adalah " << count << endl;
    cout << "Posisi data " << target << " adalah: ";
    for (int i = 0; i < positions.size(); i++)
    {
        cout << positions[i];
        if (i != positions.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;

    return positions;
}

int main()
{
    int arr[] = {34, 8, 50, 74, 87, 90, 12, 25, 20, 30, 35, 45, 40, 22, 29, 72, 60, 55, 53, 12, 32, 33, 12, 41, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int targets[] = {12, 15, 37};
    int numTargets = sizeof(targets) / sizeof(targets[0]);

    for (int i = 0; i < numTargets; i++)
    {
        int target = targets[i];
        vector<int> positions = searchAndCount(arr, n, target);
        cout << endl;
    }

    return 0;
}
