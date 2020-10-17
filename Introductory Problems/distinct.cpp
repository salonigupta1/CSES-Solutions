#include<iostream>
#include<set>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
    FIO;
    long long int n;
    cin >> n;
    set<long long int> s;
    long long int t;
    for(long long int i=0; i<n; i++){
        cin >> t;
        s.insert(t);
    }
    cout << s.size() << endl;



return 0;
   
}
