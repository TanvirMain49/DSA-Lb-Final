#include <iostream>
using namespace std;

void traverse(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << "Pass " << i << ": " << endl;

        // Inner loop: compares adjacent elements and swaps if necessary
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            traverse(arr, n);
        }
    }
}

    int main()
    {

        int n;
        cout << "Enter the size of the array: ";
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        traverse(arr, n);
        bubbleSort(arr, n);

        return 0;
    }