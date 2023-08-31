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

    ll tt;
    cin >> tt;
    for (ll t = 0; t < tt; t++){
        ll n;
        cin >> n;
        if (n == 3){
            cout << -1 << endl;
            continue;
        }
        if (n % 2 == 0){
            for (ll i = n; i >= 1; i--){
                cout << i << " ";
            }
        } else {
            for (ll i = n/2 + 1; i <= n; i++){
                cout << i << " ";
            }
            for (ll i = 1; i <= n/2; i++){
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
