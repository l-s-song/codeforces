#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <ctime>
#include <stdio.h>      /* printf */
#include <stdlib.h>
#include <queue>

#ifdef SHOW_DEBUG
#define dbg(a, ...) printf("DEBUG: " a "\n", ##__VA_ARGS__)
#else
#define dbg(...) ((void*)(0))
#endif

using namespace std;
typedef long long ll;
template<typename A, typename B>
using hmap = unordered_map<A, B>;
typedef tuple<int, int> ii;
typedef tuple<ll, ll> lii;
#define PI 3.14159265358979323846
#define inf 0x3f3f3f3f
#define infl 0x3f3f3f3f3f3f3f3fL

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    for (int t = 0; t < tt; t++){
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int bucket;
            cin >> bucket;
            a.push_back(bucket);
        }

        sort(a.begin(), a.end());
        int distinct = 1;
        for (int i = 1; i < a.size(); i++){
            if (a[i] != a[i-1]) {
                distinct++;
            }
        }
        cout << 1 << " " << n << endl;

    }

    return 0;
}
