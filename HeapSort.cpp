//
// Created by lucia on 11/22/2024.
//
// code sourced from lecture pseudocode and help from https://www.geeksforgeeks.org/heap-sort/ and https://www.geeksforgeeks.org/switch-statement-in-cpp/
#include "HeapSort.h"
#include <algorithm>

void HeapSort::heapSort(std::vector<Counties> &vect, int n, HeapSort::sortParameters param) {
    for(int i = n/2 - 1; i>=0; i--){ //building heap in place
        heapifyDown(vect, n, i, param);
    }

    for(int i = n-1; i > 0; i--){
        std::swap(vect[0], vect[i]);
        heapifyDown(vect, i ,0, param);
    }

    //reverse the vector if it's a min heap parameter to produce a min heap
    if(param == poverty || param == unemployment){
        std::reverse(vect.begin(), vect.end());
    }
}

void HeapSort::heapifyDown(std::vector<Counties> &vect, int n, int i, HeapSort::sortParameters param) {
    int largest = i; //largest is the root
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if(leftChild < n && compareByParameter(vect[leftChild], vect[largest], param)){
        largest = leftChild;
    }

    if(rightChild < n && compareByParameter(vect[rightChild], vect[largest], param)){
        largest = rightChild;
    }

    if(largest != i){
        std::swap(vect[i], vect[largest]);
        heapifyDown(vect, n, largest, param);
    }
}

bool HeapSort::compareByParameter(Counties &county1, Counties &county2, HeapSort::sortParameters param) {
    switch(param){ //creates max heaps
        case medianIncome:
            return county1.getIncome() > county2.getIncome();

        case poverty:
            return county1.getPoverty() < county2.getPoverty(); //creates a min heap

        case unemployment:
            return county1.getUnemployment() < county2.getUnemployment(); //creates a min heap

        case education:
            return county1.getEducation() > county2.getEducation();
    }

}

