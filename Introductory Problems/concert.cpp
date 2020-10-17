#include<iostream>
#include<algorithm>
#include<array>
#include<set>
using namespace std;

#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
    OJ;
    FIO;
    int n, m;
    cin >> n >> m;
    set<array<int, 2>> s;
    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        s.insert({a, i});
    }

    for(int i=0; i<m; i++){
        int t;
        cin >> t;
        auto it = s.lower_bound({t+1, 0});
        if(it == s.begin()){
            cout << "-1" << endl;
        } else {
            --it;
            cout << (*it)[0] << endl;
            s.erase(it);
        }
    }

return 0;
   
}