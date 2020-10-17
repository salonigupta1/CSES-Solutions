#include<iostream>
using namespace std;
/* #define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
*/
int main() 
{
    //OJ;
    long long int n;
    cin >> n;
    for(long long int i = 1; i<=n; i++){
        cout << (i*i)*(i*i-1)/2 - 4*(i-1)*(i-2) << endl;
    }
return 0;
   
}