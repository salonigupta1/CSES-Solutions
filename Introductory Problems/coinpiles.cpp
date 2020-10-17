#include<iostream>
using namespace std;

/*#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout); */
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
    //OJ;
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if((2*a < b)||(2*b < a)){
            cout << "NO" << endl;
            continue;
        }

        else if((2*a == b) || (2*b == a)){
            cout << "YES" << endl;
            continue;
        } else {
            a = a%3;
            b = b%3;
            if((a==0 && b==0)||(a==1 && b==2)|| (a==2 && b==1)){
                cout << "YES" << endl;
                continue;
                
            } else {
                cout << "NO" << endl;
                continue;
            }
        }

    }

return 0;
   
}
