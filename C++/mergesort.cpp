#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void merge(int A[], int l, int mid, int r)
{
    int copy[r+1];
    int i = l, k = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (A[i] < A[j])
        {
            copy[k] = A[i];
            i++;
        }
        else
        {
            copy[k] = A[j];
            j++;
        }
        k++;
    }

    while (i <= mid) // if elements are left in 1st half copy them as it is
    {
        copy[k] = A[i];
        i++;
        k++;
    }

    while (j <= r) // same for 2nd half
    {
        copy[k] = A[j];
        j++;
        k++;
    }

    for (i = l; i <= r; i++) // making the original array = sorted array
    {
        A[i] = copy[i];
    }
}

void mergesort(int arr[], int left, int right)
{
    int mid;
    if (left < right)
    {
        mid = (left + right) / 2;
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main()
{
    int n = 10;
    int arr[n];
    srand(time(0));
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 30;
        cout << arr[i] << "  ";
    }
    mergesort(arr, 0, n - 1);
    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << "  ";
    return 0;
}