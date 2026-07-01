//RADHA VALLABH SHRI HARIVANSH
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

int MAX = 1e7+10;

vector<ll> sieve(MAX);
vector<ll> ans(MAX, -1);

void precompute(){

    for(ll p = 1; p<MAX; ++p){
        for(ll i = p; i<MAX; i+=p)
            sieve[i]+=p;
    }

    for(int i = 1; i<MAX; ++i){
        ll current_sum = sieve[i];
        if(current_sum < MAX && ans[current_sum] == -1)
            ans[current_sum] = i;
    }
}

void solve(){
    ll c; cin>>c;
    cout<<ans[c]<<"\n";
}

static auto fast_io = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

int main() {
    precompute();
    int T = 1;
    if constexpr (true) {
        cin >> T;
    }
    while (T--) {
        solve();
    }
    return 0;
}