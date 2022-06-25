/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

int carFleet(int target, vector<int> &position, vector<int> &speed) {

    int n_fleets = 1;

    priority_queue<pair<int, int>> pq;

    double curr_slowest_time = 0;

    for (int i = 0; i < position.size(); i++) {
        pq.push({position[i], speed[i]});
    }

    int leading_car_speed = pq.top().second;
    int leading_car_position = pq.top().first;

    double leading_car_time_req = (target - leading_car_position) / leading_car_speed;

    pq.pop();

    while (!pq.empty()) {

        pair<int, int> curr_car = pq.top();

        double time_taken = (float)(target - curr_car.first) / curr_car.second;

        if (time_taken > leading_car_time_req) {
            n_fleets++;
            leading_car_time_req = time_taken;
        }

        pq.pop();
    }

    return n_fleets;
}

int main() {
    int n_cars;
    cin >> n_cars;

    int target;
    cin >> target;

    vector<int> position;
    vector<int> speed;

    for (int i = 0; i < n_cars; i++) {
        int curr_pos;
        cin >> curr_pos;

        position.push_back(curr_pos);
    }

    for (int i = 0; i < n_cars; i++) {
        int curr_speed;
        cin >> curr_speed;

        speed.push_back(curr_speed);
    }

    int n_fleets = carFleet(target, position, speed);
    cout << n_fleets;

    return 0;
}