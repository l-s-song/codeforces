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
#include <numeric>

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

    ll tt;
    cin >> tt;
    for (ll t = 0; t < tt; t++){
        ll n;
        cin >> n;
        vector<ll> numbers;
        for (int i = 0; i < n; i++){
            ll a;
            cin >> a;
            numbers.push_back(a);
        }

        sort(numbers.begin(), numbers.end());
        ll running_gcd = numbers[0];
        for (int i = 1; i < n; i++){
            running_gcd = gcd(running_gcd, numbers[i]);
        }
        ll pair_gcd = numbers[0];
        for (int i = 0; i < n - 1; i++){
            for (int j = 0; j < n; j++){
                ll a = gcd(numbers[i], numbers[j]);
                if (a < pair_gcd) {
                    pair_gcd = a;
                }
            }
        }

        if (pair_gcd <= 2) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl;
        }

    }

    return 0;
}
