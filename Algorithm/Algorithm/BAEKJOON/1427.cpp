#include <iostream>
using namespace std;

void swap_1427(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void quickSort_1427(int arr[], int left, int right){
    if(left >= right) return;
    int middle = (left + right)/2;
    swap_1427(arr, left, middle);
    int i = left, j = right, pivot = arr[left];
    while(i < j){
        while (i<j && arr[j]<pivot) j--;
        while (i<j && arr[i]>= pivot) i++;
        swap_1427(arr, i, j);
    }
    swap_1427(arr, left, i);
    
    quickSort_1427(arr, left, i-1);
    quickSort_1427(arr, i+1, right);
}
void main_1427(){
    int n;
    cin >> n;
    int arr[10];
    int i=0;
    while (n>0) {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }

    quickSort_1427(arr, 0, i-1);
    
    for(int j=0; j< i ;j++)
        cout<<arr[j];
}
