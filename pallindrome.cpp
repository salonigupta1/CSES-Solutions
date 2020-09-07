#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() 
{

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int freq[26] = {0};
    for(int i=0; i<s.size(); i++){
        freq[s[i]-65]++;
    }
    int c = 0;
    for(int i=0; i<26; i++){
        if(freq[i]%2!=0){
            c++;
        }
    }
    if(c>1){
        cout << "NO SOLUTION" << endl;
    } else {
        vector<char> v1, v2;
        for(int i=0; i<26; i++){
            if(freq[i]%2!=0){
                while(freq[i]--){
                    v2.push_back(i+65);
                }
            } else if(freq[i]>0 && freq[i]%2==0){
                int x = freq[i]/2;
                while(x--){
                    v1.push_back(i+65);
                }
            }
        }

        for(int i=0; i<v1.size();i++){
            cout << v1[i];
        }
        for(int i=0; i<v2.size();i++){
            cout << v2[i];
        }
        for(int i=v1.size()-1; i>=0;i--){
            cout << v1[i];
        }

    }
return 0;
   
}