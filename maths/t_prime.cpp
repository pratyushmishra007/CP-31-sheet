//RADHA VALLABH SHRI HARIVANSH
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

int MAX = 1e6+10;
vector<bool> check_prime(MAX, true);

void precompute(){
    check_prime[0] = check_prime[1] = false;
    for(int p = 2; p*p<=MAX; ++p){
        if(check_prime[p] == false)
            continue;

        for(int i = p*p; i<=MAX; i+=p)
            check_prime[i] = false;
    }
}

void solve(){
    int n; cin>>n;
    while(n--){
        ll a; cin>>a;
        ll sq = round(sqrt(a));
        cout<<((sq*sq == a && check_prime[sq]) ? "YES\n" : "NO\n");
    }
}

static auto fast_io = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

int main() {
    precompute();
    int T = 1;
    if constexpr (false) {
        cin >> T;
    }
    while (T--) {
        solve();
    }
    return 0;
}