//
//  main.cpp
//  mergeSort
//
//  Created by VIC SIDIOUS on 2020/01/11.
//  Copyright © 2020 SIDIOUSVIC. All rights reserved.
//
// to fix: it's only working with even arrays

#include <iostream>

void merge(int A[], int low, int high, int mid) {
    int x[10];
    int i = low, j = mid + 1, k = low;

    while(i <= mid && j <= high) {
        if (A[i] < A[j]) {
            x[i] = A[i];
            k++;
            i++;
        } else {
            x[k] = A[j];
            k++;
            j++;
        }
    }
    while(i <= mid) {
        x[k] = A[i];
        k++;
        i++;
    }
    while(j <= high) {
        x[k] = A[j];
        k++;
        j++;
    }
    for(i = low; i < k; i++) {
        A[i] = x[i];
    }
}

void mergeSort(int A[], int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, high, mid);
    }
    return;
}

int main() {
    
    int size = 7;
    int high = size - 1;
    int low = 0;
    int A[7] = {9, 3, 43, 47, 58, 99};
    
    
    mergeSort(A, low, high);
    
    for(int i = 0; i < 7; i++) {
        std::cout << A[i] << std::endl;
    }
    
    return 0;
}
