//
// Created by lucia on 11/22/2024.
//
#include <vector>
#ifndef POSTGRADPONDERIN_HEAPSORT_H
#define POSTGRADPONDERIN_HEAPSORT_H


class HeapSort {
public:
    void heapSort(std::vector<int>& arr, int n, int i);
    void heapify(std::vector<int>& arr);
};


#endif //POSTGRADPONDERIN_HEAPSORT_H
