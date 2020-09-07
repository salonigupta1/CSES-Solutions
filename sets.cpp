#include<iostream>
#include<string>
#include<vector>
using namespace std;

/*#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout); */
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() 
{
    //OJ;
    long long int n;
    cin >> n;
    int* arr = new int[n+1];
    arr[0] = 0;
    int sum = 0;
    for(int i=1; i<=n; i++){
        arr[i] = i;
        sum+=i;
    }
    string ans = "";
    vector<int> v1, v2;
    if(sum%2==0){
        if(n%4==0){
            ans = "YES";
            for(int i=1; i<=n/4; i++){
                v1.push_back(i);
            }
            for(int i=0; i<n/4; i++){
                v1.push_back(arr[n-i]);
            }
            for(int i=n/4+1; i<v1[v1.size()-1]; i++){
                v2.push_back(i);
            }
        } else if(n%4==3){
            ans = "YES";
            vector<int> v;
            for(int i=4; i<=n; i++){
                v.push_back(i);
            }
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);

            for(int i=0; i<(n-3)/4; i++){
                v1.push_back(v[i]);
                v1.push_back(v[v.size()-1-i]);
            }
            for(int i= 4+(n-3)/4; i<=n-(n-3)/4; i++){
                v2.push_back(i);
            }
        } else
            ans = "NO";
    }else
        ans = "NO";

    if(ans == "YES"){
        cout << ans << endl;
        cout << v1.size() << endl;
        for(int i=0; i<v1.size(); i++){
            cout << v1[i] << " ";
        }

        cout << endl;
        cout << v2.size() << endl;
        for(int i=0; i<v2.size(); i++){
            cout << v2[i] << " ";
        }
    } else {
        cout << ans <<  endl;
    }

return 0;
   
}