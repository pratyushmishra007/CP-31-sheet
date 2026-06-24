#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

vector<int> x = {+1, +1, -1, -1};
vector<int> y = {+1, -1, +1, -1};

void solve(){
    int a, b, c, d, e, f; cin>>a>>b>>c>>d>>e>>f;
    set<pii> st1, st2;
    for(int i = 0; i<4; ++i){
        st1.insert({c+x[i]*a, d+y[i]*b});
        st1.insert({c+x[i]*b, d+y[i]*a});
        st2.insert({e+x[i]*a, f+y[i]*b});
        st2.insert({e+x[i]*b, f+y[i]*a});
    }
    int ans = 0;
    for(auto &it: st1)
        ans+=(st2.find(it) != st2.end());

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