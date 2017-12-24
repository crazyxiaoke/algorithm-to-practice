//
// Created by 45932 on 2017/12/24.
//

#ifndef C_SELECTIONSORT_H
#define C_SELECTIONSORT_H

#include <iostream>

using namespace std;

//选择排序
template<typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}
#endif //C_SELECTIONSORT_H
