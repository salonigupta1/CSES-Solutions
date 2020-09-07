#include<iostream>
#include<cmath>
using namespace std;

/*#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout); */
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
    //OJ;
    int n;
    cin >> n;
    int ans = 1;
    int mod = 1000000007;
    for(int i=0; i<n; i++){
        ans = (ans*2)%mod;
    }

    cout << ans << endl;
    

return 0;
   
}
