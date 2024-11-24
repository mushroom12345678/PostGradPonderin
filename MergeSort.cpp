//
// Created by jackd on 11/23/2024.
//
#include "MergeSort.h"
#include <iostream>
#include <vector>

using namespace std;
//used class resourses, slides/lectures, to form code, Jack Detweiler 11/22

void MergeSort::merge(vector<int>& list, int left, int mid, int right) {

    // Copy left list
    vector<int> copyLeftList(mid - left + 1);
    for (int i = 0; i < mid - left + 1; i++)
        copyLeftList[i] = list[left + i];

    //copy right list
    vector<int> copyRightList(right - mid);
    for (int i = 0; i < right - mid; i++)
        copyRightList[i] = list[mid + 1 + i];

    int i = 0;
    int j = 0;
    int k = left;

    //merge halves
    while (j < right - mid and i < mid - left + 1) {
        if (copyLeftList[i] <= copyRightList[j]) {
            list[k] = copyLeftList[i];
            i++;
        } else {
            list[k] = copyRightList[j];
            j++;
        }
        k++;
    }
    while (i < mid - left + 1) {
        list[k] = copyLeftList[i];
        i++;
        k++;
    }
    while (j < right - mid) {
        list[k] = copyRightList[j];
        j++;
        k++;
    }
}

//for initial call left = 0, right = number of elements minus one, recursively ran with halves
void MergeSort::mergeSort(vector<int>& list, int left, int right) {
    if (left < right) {
        //sort first half
        mergeSort(list, left, (left + (right - left) / 2));

        //sort second half
        mergeSort(list, (left + (right - left) / 2) + 1, right);

        // Merge halves
        merge(list, left, (left + (right - left) / 2), right);
    }
}
