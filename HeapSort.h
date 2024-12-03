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
    enum sortParameters{
        medianIncome, poverty, unemployment, education
    };
    void heapSort(std::vector<Counties>& arr, int n, HeapSort::sortParameters param);
    void heapifyDown(std::vector<Counties>& vect, int n, int i, HeapSort::sortParameters param);
    bool compareByParameter(Counties& county1, Counties& county2, sortParameters param);
};


#endif //POSTGRADPONDERIN_HEAPSORT_H
