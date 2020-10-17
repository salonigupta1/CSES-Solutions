
#include<iostream>
using namespace std;


#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{

    long long int n;
    cin >> n;
    while(n!=1){
        cout << n << " ";
        if(n%2==0){
            n = n/2;
        } else {
            n*=3;
            n+=1;
        }
    }

    cout << n << endl;
    return 0;
   
}