/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

void DutchFlagPartition(int pivot_index, vector<int> flag) {
    int pivot_element = flag[pivot_index];

    for (int i = 0; i < flag.size(); i++) {
        for (int j = i + 1; j < flag.size(); j++) {
            if (flag[j] < pivot_element) {
                swap(flag[j], flag[i]);
                break;
            }
        }
    }

    for (int i = flag.size() - 1; i >= 0; i--) {
        for (int j = i - 1; j >= 0 && ; j--) {
            if (flag[j] > pivot_element) {
                swap(flag[j], pivot_element);
                break;
            }
        }
    }

    for (int i : flag) {
        cout << i << " ";
    }
}

int main() {

    int n_elements = 0;
    cin >> n_elements;
    vector<int> flag;

    while (n_elements--) {
        int element;
        cin >> element;
        flag.push_back(element);
    }

    DutchFlagPartition(2, flag);

    return 0;
}