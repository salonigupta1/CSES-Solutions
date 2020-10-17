#include<iostream>
#include<cmath>
using namespace std;

/*#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout); */
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
   // OJ;
    int n;
    cin >> n;
    int ans = 0;
    for(int i= 5; n/i>=1; i*=5){
        ans+=(n/i);
    }
    cout << ans << endl;
    return 0;
}