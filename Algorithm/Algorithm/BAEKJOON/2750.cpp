#include <iostream>
using namespace std;

void swap_2750(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void quickSort_2750(int arr[], int left, int right){
    if(left >= right) return;
    int middle = (left + right)/2;
    swap_2750(arr, left, middle);
    int i = left, j = right, pivot = arr[left];
    while(i < j){
        while (i<j && arr[j]>pivot) j--;
        while (i<j && arr[i]<= pivot) i++;
        swap_2750(arr, i, j);
    }
    swap_2750(arr, left, i);

    quickSort_2750(arr, left, i);
    quickSort_2750(arr, i+1, right);
}

void main_2750(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i< n;i++)
        cin >> arr[i];

    quickSort_2750(arr, 0, n-1);

    for(int i=0; i< n;i++)
        cout<<arr[i] << endl;
}
