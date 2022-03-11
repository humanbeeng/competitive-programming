/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int find_first_occurrence(int arr[], int n_elements, int key) {
    int left = 0;
    int right = n_elements - 1;
    int pos = -1;

    while (left <= right) {
        int mid = left + ((right - left) / 2);
        if (arr[mid] == key) {
            pos = mid;
            right = mid - 1;
        } else if (key > arr[mid]) {
            left = mid + 1;
        } else if (key < arr[mid]) {
            right = mid - 1;
        }
    }
    return pos;
}

int find_last_occurrence(int arr[], int n_elements, int key) {
    int left = 0;
    int right = n_elements - 1;

    int pos = -1;

    while (left <= right) {
        int mid = left + ((right - left) / 2);

        if (arr[mid] == key) {
            pos = mid;
            left = mid + 1;
        } else if (key > arr[mid]) {
            left = mid + 1;
        } else if (key < arr[mid]) {
            right = mid - 1;
        }
    }
    return pos;
}

int find_no_of_occurrences(int arr[], int n_elements, int key) {
    int left = 0;
    int right = n_elements - 1;

    /* 
	no of occurrences = idx of last_occurrence - first_occurrence + 1
		+1 is for compensating for zero based indexing
	*/

    int first_occurrence = find_first_occurrence(arr, n_elements, key);

    if (first_occurrence == -1)
        return 0;

    int last_occurrence = find_last_occurrence(arr, n_elements, key);

    int no_of_occurrence = last_occurrence - first_occurrence + 1;

    return no_of_occurrence;
}

int main() {
    int n_elements;
    cin >> n_elements;

    int arr[n_elements + 2];

    for (int i = 0; i < n_elements; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    int no_of_occurrences = find_no_of_occurrences(arr, n_elements, key);

    cout << no_of_occurrences;

    return 0;
}