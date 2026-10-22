#include <iostream>
using namespace std;

void reverseArray(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int arr2[size];
    for (int i = 0; i < size; i++)
    {
        int j = size - i - 1;
        arr2[i] = arr[j];
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = arr2[i];
    }
    int i = 0;
    int j = size - 1;

    int start = arr[i];
    int end = arr[j];

    while (start < end)
    {
        swap(arr[start], arr[end]);

        // int temp=arr[i];
        // arr[i]=arr[j];
        // arr[j]=temp;

        i++;
        j--;
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
    cout << endl;
    std::cout << "Using extra space " << endl;

    reverseArray(arr, size);

    return 0;
}