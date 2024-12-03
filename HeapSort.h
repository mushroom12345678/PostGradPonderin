//
// Created by lucia on 11/22/2024.
//
#include <vector>
#include "Counties.h"

#ifndef POSTGRADPONDERIN_HEAPSORT_H
#define POSTGRADPONDERIN_HEAPSORT_H

//https://www.geeksforgeeks.org/enumeration-in-cpp/

class HeapSort {
public:
//    enum sortParameters{
//        medianIncome, poverty, unemployment, education, score
//    };
    void heapSort(std::vector<Counties>& arr, int n);
    void heapifyDown(std::vector<Counties>& vect, int n, int i);
    //bool compareByParameter(Counties& county1, Counties& county2);
};


#endif //POSTGRADPONDERIN_HEAPSORT_H
