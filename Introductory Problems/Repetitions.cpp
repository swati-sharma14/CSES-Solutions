#include <iostream>
using namespace std;
  
// Driver Code
int main(){
    string s;
    cin >> s;
    int max = 1;
    int ans = 1;
    for(int i=1; i<s.length(); i++){
        if(s[i]==s[i-1]){
            ans++;
            if(ans > max){
                max = ans;
            }
        }
        else{
            if(ans > max){
                max = ans;
            }
            ans = 1;
        }
    }
    cout << max ;
    return 0;
}
