//
// Created by lucia on 11/22/2024.
//
// code sourced from lecture pseudocode and help from https://www.geeksforgeeks.org/heap-sort/ and https://www.geeksforgeeks.org/switch-statement-in-cpp/
#include "HeapSort.h"

void HeapSort::heapSort(std::vector<Counties> &arr, int n, HeapSort::sortParameters param) {
    for(int i = n/2 - 1; i>=0; i--){ //building heap in place
        heapifyDown(arr, n, i, param);
    }

    for(int i = n-1; i > 0; i--){
        std::swap(arr[0], arr[i]);
        heapifyDown(arr, i ,0, param);
    }
}

void HeapSort::heapifyDown(std::vector<Counties> &arr, int n, int i, HeapSort::sortParameters param) {
    int largest = i; //largest is the root
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if(leftChild < n && compareByParameter(arr[leftChild], arr[largest], param)){
        largest = leftChild;
    }

    if(leftChild < n && compareByParameter(arr[rightChild], arr[largest], param)){
        largest = leftChild;
    }

    if(largest != i){
        std::swap(arr[i], arr[largest]);
        heapifyDown(arr, n, largest, param);
    }
}

bool HeapSort::compareByParameter(Counties &county1, Counties &county2, HeapSort::sortParameters param) {
    switch(param){
        case medianIncome:
            return county1.getIncome() > county2.getIncome();

        case poverty:
            return county1.getPoverty() > county2.getPoverty();

        case unemployment:
            return county1.getUnemployment() > county2.getUnemployment();

        case education:
            return county1.getEducation() > county2.getEducation();
    }

}

