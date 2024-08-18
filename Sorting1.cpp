#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n)
{
    // In this sort we select the minimum element form the array or anything, and then we place it at the first position, then second then third etc and the swap the values which are already there
    // check ss44 for the same

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = 0;
        int minNum = arr[i];
        for (int j = i; j < n; j++)
        {
            if (minNum > arr[j])
            {
                minNum = arr[j];
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    // time complexity of this algo is : o(n^2)
}

void BubbleSort(int arr[], int n)
{
    // This is kind of opposite to the selection as in one iteration of this the largest element gets pushed to the last, by comparing the adjacent two elements in each iteration.

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void InsertionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            continue;
        }
        else
        {
            for (int j = i + 1; j > 0; j--)
            {
                if (arr[j] < arr[j - 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j-1] = temp;
                }
                else
                {
                    break;
                }
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    InsertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}