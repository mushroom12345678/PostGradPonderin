//
// Created by lucia on 11/19/2024.
//
#include <vector>
#ifndef POSTGRADPONDERIN_COUNTY_H
#define POSTGRADPONDERIN_COUNTY_H


class County {
private:
    std::vector<County> counties;
public:
    void heapSort(std::vector<int>& arr, int n, int i);
    void heapify(std::vector<int>& arr);
};


#endif //POSTGRADPONDERIN_COUNTY_H
