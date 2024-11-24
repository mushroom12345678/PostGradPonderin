//
// Created by lucia on 11/22/2024.
//
#include <vector>
#include "County.h"

#ifndef POSTGRADPONDERIN_HEAPSORT_H
#define POSTGRADPONDERIN_HEAPSORT_H

//https://www.geeksforgeeks.org/enumeration-in-cpp/

class HeapSort {
public:
    enum sortParameters{
        medianIncome, poverty, unemployment, education
    };
    void heapSort(std::vector<County>& arr, int n, HeapSort::sortParameters param);
    void heapifyDown(std::vector<County>& arr, int n, int i, HeapSort::sortParameters param);
    bool compareByParameter(County& county1, County& county2, sortParameters param);
};


#endif //POSTGRADPONDERIN_HEAPSORT_H
