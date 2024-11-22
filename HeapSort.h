//
// Created by lucia on 11/22/2024.
//
#include <vector>
#include "County.h"

#ifndef POSTGRADPONDERIN_HEAPSORT_H
#define POSTGRADPONDERIN_HEAPSORT_H


class HeapSort {
public:
    void heapSort(std::vector<County>& arr, int n);
    void heapifyDown(std::vector<County>& arr, int n, int i);
};


#endif //POSTGRADPONDERIN_HEAPSORT_H
