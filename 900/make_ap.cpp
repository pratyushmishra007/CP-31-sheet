// RADHA VALLABH SHRI HARIVANSH
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int a, b, c; cin>>a>>b>>c;
    if(b-a == c-b){
        cout<<"YES\n";
        return;
    }

    int new_a = 2*b-c;
    if(new_a%a == 0 && new_a>0){
        cout<<"YES\n";
        return;
    }

    int new_c = 2*b-a;
    if(new_c%c == 0 && new_c>0){
        cout<<"YES\n";
        return;
    }
    
    int new_b = (c+a);
    if(new_b&1){
        cout<<"NO\n";
        return;
    }
    new_b/=2;
    if(new_b%b == 0 && new_b>0){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
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