#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n, q;
    cin>>n>>q;
    vector<int> pref(n+1, 0);

    for(int i = 1; i<=n; ++i){
        int a; cin>>a;
        pref[i] = pref[i-1]+a;
    }
    while(q--){
        int l, r, k;
        cin>>l>>r>>k;
        int total_sum = pref[n];
        total_sum-=(pref[r]-pref[l-1]);
        total_sum+=(k*(r-l+1));
        cout<<(total_sum&1 ? "YES\n" : "NO\n");
    }
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