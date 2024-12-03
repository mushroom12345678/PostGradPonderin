//
// Created by lucia on 11/22/2024.
//
// code sourced from lecture pseudocode and help from https://www.geeksforgeeks.org/heap-sort/ and https://www.geeksforgeeks.org/switch-statement-in-cpp/
#include "HeapSort.h"
#include <algorithm>

void HeapSort::heapSort(std::vector<Counties> &vect, int n) {
    for(int i = n/2 - 1; i>=0; i--){ //building heap in place
        heapifyDown(vect, n, i);
    }

    for(int i = n-1; i > 0; i--){
        std::swap(vect[0], vect[i]);
        heapifyDown(vect, i ,0);
    }

}

void HeapSort::heapifyDown(std::vector<Counties> &vect, int n, int i) {
    int largest = i; //largest is the root
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if(leftChild < n && vect[leftChild].getScore() > vect[largest].getScore()){
        largest = leftChild;
    }

    if(rightChild < n && vect[rightChild].getScore() > vect[largest].getScore()){
        largest = rightChild;
    }

    if(largest != i){
        std::swap(vect[i], vect[largest]);
        heapifyDown(vect, n, largest);
    }
}

//Don't need to compare by parameter if we're only sorting by final score
//bool HeapSort::compareByParameter(Counties &county1, Counties &county2, HeapSort::sortParameters param) {
//    switch(param){ //creates max heaps
//        case medianIncome:
//            return county1.getIncome() < county2.getIncome();
//
//        case poverty:
//            return county1.getPoverty() < county2.getPoverty(); //creates a min heap
//
//        case unemployment:
//            return county1.getUnemployment() < county2.getUnemployment(); //creates a min heap
//
//        case education:
//            return county1.getEducation() < county2.getEducation();
//
//        case score:
//            return county1.getScore() < county2.getScore();
//    }
//
//}

