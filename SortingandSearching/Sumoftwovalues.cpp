#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num{},alvo{},input{}; cin >> num >> alvo;
    unordered_map<int, int> mi;
    mi.reserve(num * 2);
    mi.max_load_factor(0.7);
    for(int i = 0; i < num ; i++){
        cin >> input;
        if(mi.count(alvo-input)){
            cout << mi[alvo-input] << " " << i+1 << endl; return 0;
        }
        mi[input] = i+1;
    }
    cout << "IMPOSSIBLE\n";

    return 0;
}
