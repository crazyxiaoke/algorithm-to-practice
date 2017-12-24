#include <iostream>
#include "Student.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "SortTestHelper.h"
#include "MergeSort.h"

using namespace std;


int main() {
    int n = 100000;
    int swaptime = 10;
    int *arr = SortTestHelper::generateRandomArray(n, 0, n);
    int *arrcopy = SortTestHelper::copyIntArray(arr, n);
////    selectionSort(arr, n);
////    SortTestHelper::printArray(arr, n);
    SortTestHelper::testSort("mergeSort", mergeSort, arr, n);
    SortTestHelper::testSort("insertionSort", insertionSort, arrcopy, n);

    arr = SortTestHelper::generateNearlyOrderedArray(n, swaptime);
    arrcopy = SortTestHelper::copyIntArray(arr, n);
    SortTestHelper::testSort("mergeSort", mergeSort, arr, n);
    SortTestHelper::testSort("insertionSort", insertionSort, arrcopy, n);
    delete[] arr;
    delete[] arrcopy;
    return 0;
}