//
// Created by lucia on 11/22/2024.
//

#include "HeapSort.h"

void HeapSort::heapSort(std::vector<County> &arr, int n, HeapSort::sortParameters param) {
    for(int i = n/2 - 1; i>=0; i--){ //building heap in place
        heapifyDown(arr, n, i, param);
    }

    for(int i = n-1; i > 0; i--){
        std::swap(arr[0], arr[i]);
        heapifyDown(arr, i ,0, param);
    }
}

void HeapSort::heapifyDown(std::vector<County> &arr, int n, int i, HeapSort::sortParameters param) {
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

bool HeapSort::compareByParameter(County &county1, County &county2, HeapSort::sortParameters param) {
    switch(param){
        case medianIncome:
            return county1.medianHouseholdIncome > county2.medianHouseholdIncome;

        case poverty:
            return county1.percentPoverty > county2.percentPoverty;

        case unemployment:
            return county1.unemployment > county2.unemployment;

        case education:
            return county1.HSDiplomaPercent > county2.HSDiplomaPercent;
    }

}

