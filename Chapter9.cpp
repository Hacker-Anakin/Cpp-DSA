/*
    👉 Sorting and Searching Algorithms
*/

#include <iostream>
using namespace std;

// 👉 Bubble Sort
// Sort by checking adjacent elements and swapping them if they are in wrong order.
void bubbleSort(int arr[], int n){
    bool isSwap = false;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap){ // check if array is sorted before running the next loop
            return;
        }
    }
}
// TC: O(n²), SC: O(1)

// 👉 Selection Sort
// Sort by selecting the minimum element and placing it at the beginning.
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int smallestIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
}
// TC: O(n²), SC: O(1)

// 👉 Insertion Sort
// Sort by inserting the element at its correct position.
void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
// TC: O(n²), SC: O(1)

// 👉 Merge Sort
// TC: O(n log(n)), SC: O(1)

// 👉 Quick Sort
// TC: O(n log(n)), SC: O(1)

// 👉 Heap Sort

// 👉 Counting Sort

// 👉 Radix Sort

// 👉 Bucket Sort

// 👉 Shell Sort

// 👉 Binary Search 
// Only in sorted array, divides the array in 2 parts untill we find target
int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;
	
    while(start <= end){
        int mid = (start + end) / 2;
        //int mid = start + (end-start)/2; mathematically same 

        if(key > arr[mid]){
            start = mid + 1;
        }else if (key < arr[mid]){
            end = mid - 1;
        }else {
            return mid;
        }
    }

    return -1;
}// TC: O(log n), SC: O(1)

// 👉 Linear Search
// Finds target by moving index by +1 until we find it.
int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
} // TC: O(n), SC: O(1)

// 👉 Jump Search

// 👉 Exponential Search

// 👉 Fibonacci Search

// 👉 Ternary Search

// 👉 Interpolation Search

// 👉 Sublist Search (Search a linked list in another list)

// 👉 Search in a row-wise and column-wise sorted 2D array

// 👉 Find a peak element

// 👉 Find the maximum element in an array which is first increasing and then decreasing

// 👉 Find the element that appears once in a sorted array where all other elements appear twice

// 👉 Find the element that appears once in a sorted array where all other elements appear thrice


int main(){
    

    return 0;
}