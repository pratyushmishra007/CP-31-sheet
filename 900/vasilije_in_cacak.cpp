#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    ll n, k, x; 
    cin>>n>>k>>x;
    ll s1 = n*(n+1)/2, s2 = (n-k)*(n-k+1)/2;

    ll min_sum = k*(k+1)/2, max_sum = s1-s2;
    cout<<((x<min_sum || x>max_sum) ? "NO\n" : "YES\n");
}

static auto fast_io = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

int main() {
    int T = 1;
    if constexpr (true) {
        cin >> T;
    }
    while (T--) {
        solve();
    }
    return 0;
}