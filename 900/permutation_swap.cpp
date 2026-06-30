#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    int a; cin>>a;
    int ans = abs(1-a);
    for(int i = 2; i<=n; ++i){
        int a; cin>>a;
        int diff = abs(a-i);
        ans = gcd(ans, diff);
    }

    cout<<ans<<'\n';
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