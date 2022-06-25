/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

struct CoordinateWithSource {
    pair<int, int> coordinate;
    pair<int, int> source;
};

class CoordinatesComparator {

private:
    int calculateDistanceToOrigin(pair<int, int> coordinate_1, pair<int, int> coordinate_2) {
        int x_difference = coordinate_1.first - coordinate_2.first;
        int y_difference = coordinate_1.second - coordinate_2.second;

        return (pow(x_difference, 2) + pow(y_difference, 2));
    }

public:
    int operator()(CoordinateWithSource coordinate_1, CoordinateWithSource coordinate_2) {
        return (calculateDistanceToOrigin(coordinate_1.coordinate, coordinate_1.source) < calculateDistanceToOrigin(coordinate_2.coordinate, coordinate_2.source));
    }
};
pair<int, int> findKClosestPoint(vector<pair<int, int>> &coordinates_arr, int n_elements, pair<int, int> source, int k) {

    priority_queue<CoordinateWithSource, vector<CoordinateWithSource>, CoordinatesComparator> max_heap_of_coordinates;

    for (pair<int, int> coordinates : coordinates_arr) {

        CoordinateWithSource coordinates_with_source;
        coordinates_with_source.coordinate = coordinates;
        coordinates_with_source.source = source;
        max_heap_of_coordinates.push(coordinates_with_source);

        if (max_heap_of_coordinates.size() > k) {
            max_heap_of_coordinates.pop();
        }
    }

    return max_heap_of_coordinates.top().coordinate;
}

int main() {
    int n_elements;
    cin >> n_elements;

    vector<pair<int, int>> coordinates_arr;

    for (int i = 0; i < n_elements; i++) {
        int x, y;
        cin >> x >> y;
        coordinates_arr.push_back({x, y});
    }

    pair<int, int> source;
    int source_x, source_y;
    cin >> source_x >> source_y;
    source.first = source_x;
    source.second = source_y;

    int k;
    cin >> k;

    pair<int, int> kClosestPoint = findKClosestPoint(coordinates_arr, n_elements, source, k);

    cout << kClosestPoint.first << " " << kClosestPoint.second;

    return 0;
}