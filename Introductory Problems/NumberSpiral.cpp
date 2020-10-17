#include<iostream>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{

    int t;
    cin >> t;
    while(t--){
        long long int x, y;
        cin >> x >> y;
        long long int ans;
        if(x<y){
                if(y%2!=0){
                ans = (y*y)-x+1;
            }else {
                ans = ((y-1)*(y-1))+x;
            }
        } else {
            if(x%2!=0){
                ans = ((x-1)*(x-1))+y;
            } else {
                ans = (x*x)-y+1;
            }
        }

        cout << ans << endl;
    }
return 0;
   
}
