//
// Created by lucia on 11/22/2024.
//

#include "HeapSort.h"

void HeapSort::heapSort(std::vector<County> &arr, int n) {
    for(int i = n/2 - 1; i>=0; i--){ //building heap in place
        heapifyDown(arr, n, i);
    }

    for(int i = n-1; i > 0; i--){
        std::swap(arr[0], arr[i]);
        heapifyDown(arr, i ,0);
    }
}

void HeapSort::heapifyDown(std::vector<County> &arr, int n, int i) {
    int largest = i; //largest is the root
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;
}

