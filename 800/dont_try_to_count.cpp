#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n, m; cin>>n>>m;
    string x, s; cin>>x>>s;
    int ans = 0;
    for(int i = 1; i<=6; ++i){
        if(x.find(s) != string::npos){
            cout<<ans<<"\n";
            return;
        }
        ans++;
        x+=x;
        n*=2;
    }
    cout<<-1<<"\n";
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