#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    vi vec(n);
    int maxi = 0, mini = INT_MAX;
    for(auto &it: vec)
        cin>>it, maxi = max(maxi, it), mini = min(mini, it);

    if(vec[0] == mini || vec[0] == maxi || vec[n-1] == maxi || vec[n-1] == mini){
        cout<<maxi-mini<<"\n";
        return;
    }

    int ans = 0;
    for(int i = 1; i<n-1; ++i)
        ans = max({ans, abs(vec[i]-vec[i-1]), abs(vec[i+1]-vec[i])});

    cout<<ans<<"\n";
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