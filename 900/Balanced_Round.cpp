#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int ans = 0, count = 1;
    int n, k; cin>>n>>k;
    vi vec(n);
    for(auto &it: vec)
        cin>>it;

    if(n == 1){
        cout<<"0\n";
        return;
    }
    sort(vec.begin(), vec.end());

    for(int i = 0; i<n-1; ++i){
        if(vec[i+1]-vec[i] > k)
            count = 1;
        else   
            count++;
        ans = max(ans, count);
    }

    cout<<n-ans<<"\n";
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