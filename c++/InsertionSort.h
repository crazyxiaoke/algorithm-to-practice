//
// Created by 45932 on 2017/12/24.
//

#ifndef C_INSERTIONSORT_H
#define C_INSERTIONSORT_H
//插入排序
template<typename T>
void insertionSort(T arr[], int n) {
    for (int i = 1; i < n; i++) {
        T e = arr[i];
        int j;
        for (j = i; j > 0 && e < arr[j - 1]; j--) {
            arr[j] = arr[j - 1];
        }
        arr[j] = e;
    }
}
#endif //C_INSERTIONSORT_H
