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
    for(auto &it: vec)
        cin>>it;

    for(int i = 0; i<n; ++i)
        vec[i]+=(vec[i] == 1);

    for(int i = 0; i<n-1; ++i)
        vec[i+1]+=(vec[i+1]%vec[i] == 0);
    for(auto &it: vec)
        cout<<it<<" ";
    cout<<"\n";
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