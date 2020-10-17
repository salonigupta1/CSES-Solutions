#include<iostream>
#include<string>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{

    int n;
    cin >> n;
    if(n<=3 && n>1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    string s = "";
    for(int i=1; i<=n; i++){
        if(i%2==0){
            cout << i << " ";
        } else {
            s+= to_string(i) + " ";
        }
    }

    cout << s << endl;
return 0;
   
}
