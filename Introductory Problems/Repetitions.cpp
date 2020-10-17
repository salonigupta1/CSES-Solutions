#include<iostream>
#include<string>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{

    string s;
    cin >> s;
    long long int count = 1;
    long long int maxCount = 0;
    for(long long int i=0; i<s.length()-1; i++){
        if(s[i]==s[i+1]){
            count++;
        } else {
            count = 1;
        }
        if(count > maxCount){
            maxCount = count;
        }
    }

    if(maxCount == 0){
        cout << 1 << endl;
        return 0;
    }
    cout << maxCount << endl;
    return 0;
   
}