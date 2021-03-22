#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100005

int temp[MAX_SIZE];

int mergeTwoArrays(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int invCount = 0;
 
    i = left; 
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            invCount = invCount + (mid - i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
 
    return invCount;
}

int enhancedMergeSort(int arr[], int left, int right)
{

    int mid, invCount = 0;
    if (right > left) {
        mid = (right + left) / 2;
        invCount += enhancedMergeSort(arr, left, mid);
        invCount += enhancedMergeSort(arr, mid + 1, right);
        invCount += mergeTwoArrays(arr, left, mid + 1, right);
    }
    return invCount;
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