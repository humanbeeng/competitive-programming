/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

class CoordinateComparator {
private:
    int calculateDistanceFromOrigin(pair<int, int> coordinate) {
        return pow(coordinate.first, 2) + pow(coordinate.second, 2);
    }

public:
    int operator()(pair<int, int> &coordinate_1, pair<int, int> &coordinate_2) {
        return calculateDistanceFromOrigin(coordinate_1) < calculateDistanceFromOrigin(coordinate_2);
    }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k) {

        priority_queue<pair<int, int>, vector<pair<int, int>>, CoordinateComparator> max_heap_of_coordinates;

        for (auto point : points) {
            max_heap_of_coordinates.push({point[0], point[1]});

            if (max_heap_of_coordinates.size() > k) {
                max_heap_of_coordinates.pop();
            }
        }

        vector<vector<int>> result;

        while (!max_heap_of_coordinates.empty()) {
            vector<int> coordinates;
            coordinates.push_back(max_heap_of_coordinates.top().first);
            coordinates.push_back(max_heap_of_coordinates.top().second);
            result.push_back(coordinates);

            max_heap_of_coordinates.pop();
        }

        return result;
    }
};
