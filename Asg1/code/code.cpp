#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100005

int mergeTwoArrays(int arr[], int left, int mid, int right)
{
    int temp[MAX_SIZE];
    int i, j, k;
    int inv_count = 0;
 
    i = left; 
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
 
    return inv_count;
}

int enhancedMergeSort(int arr[], int left, int right)
{

    int mid, inv_count = 0;
    if (right > left) {
        mid = (right + left) / 2;
        inv_count += enhancedMergeSort(arr, left, mid);
        inv_count += enhancedMergeSort(arr, mid + 1, right);
        inv_count += mergeTwoArrays(arr, left, mid + 1, right);
    }
    return inv_count;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int ans = enhancedMergeSort(A, 0, n-1);
    cout<<"Inversion Count of the Array is : "<<ans;
    return 0;
}