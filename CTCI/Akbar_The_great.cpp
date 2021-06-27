/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, init, n) for (int i = init; i < n; i++)
#define pb(num) push_back(num)
#define ppb pop_back()
#define all(arr) arr.begin(), arr.end()
#define pi(arr)                                            \
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) \
    cout << arr[i] << ' '
#define imn INT_MIN
#define imx INT_MAX
#define mod 1000000007
#define ssz(arrayy) sizeof(arrayy) / sizeof(arrayy[0])
#define sf(num) scanf("%d", &num)
#define br "\n"
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<char> vc;
typedef unsigned long long ull;
typedef set<string, int> ssi;
typedef set<int> si;
typedef set<string> ss;

void setio(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void perform_bfs(int soldier_station, vector<int> city_network[], bool visited[]) {
    queue<int> bfs_queue;

    int base_station = soldier_station;
    visited[base_station] = true;
    bfs_queue.push(soldier_station);
    while (!bfs_queue.empty()) {
        int curr_city = bfs_queue.front();
        bfs_queue.pop();
        for (auto neighbour : city_network[curr_city]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                bfs_queue.push(neighbour);
            }
        }
    }
}

int solve() {
    int n_cities, n_roads, n_soldiers;
    cin >> n_cities >> n_roads >> n_soldiers;
    vector<int> city_network[n_cities];
    bool visited[1000001];
    memset(visited, false, sizeof(visited));

    //step 1 : to create a network through the given input
    int city1, city2;
    for (int i = 0; i < n_roads; i++) {
        cin >> city1 >> city2;
        //create a road
        city_network[city1].push_back(city2);
        city_network[city2].push_back(city1);
    }

    //step 2 : process the number of soldiers
    for (int i = 1; i <= n_roads; i++) {
        cout << i << " -> ";
        for (int neighbour : city_network[i]) {
            cout << neighbour << " ";
        }
        cout << "\n";
    }

    // for (int i = 0; i < n_soldiers; i++) {
    //     int soldier_station, soldier_strength;
    //     cin >> soldier_station >> soldier_strength;

    //     if (visited[soldier_station]) {
    //         cout << "No" << br;
    //         return 0;
    //     } else {
    //         for (int i = 0; i < soldier_strength; i++) {
    //             perform_bfs(soldier_station, city_network, visited);
    //         }
    //     }
    // }

    cout << "Yes" << br;

    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //setio("");
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}