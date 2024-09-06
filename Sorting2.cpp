#include <bits/stdc++.h>
using namespace std;

void mergeArr(vector<int> &arr, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> v;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            v.push_back(arr[left]);
            left++;
        }
        else
        {
            v.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        v.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        v.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = v[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    // merge sort is divide and merge
    // check ss46, 47 for merge sort explanation
    // visit gfg for understand the algorithm or view the code and ss
    // check ss48, 50 for pseudocode and operation
    // in merge sort we recursiverly call the function until we are remaining with a single value then we come back along with sorting arrays
    // check ss51 for merge algorithm
    // for time complexity check ss52;

    if (low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    mergeArr(arr, low, mid, high);
    
}

void quickSort(){
    
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x; 
        arr.push_back(x);
    }
    mergeSort(arr, 0, n - 1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}