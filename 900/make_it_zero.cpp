#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

void solve(){
    int n; cin>>n;
    for(int i = 0; i<n; ++i){
        int a; cin>>a;
    }
    if(n&1){
        cout<<"4\n";
        cout<<1<<" "<<n-1<<"\n";
        cout<<1<<" "<<n-1<<"\n";
        cout<<n-1<<" "<<n<<"\n";
        cout<<n-1<<" "<<n<<"\n";
    }
    else{
        cout<<"2\n";
        cout<<1<<" "<<n<<"\n";
        cout<<1<<" "<<n<<"\n";
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