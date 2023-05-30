#include <iostream>
#include <map>
using namespace std;
  
// Driver Code
int main(){
    int a,b;
    int ans = 0;
    cin >> a;
    map<int, int> mappy;
    for(int i=0; i<a; i++){
        cin >> b;
        if(mappy[b]==0){
            ans++;
        }
        mappy[b]+=1;
    }
    cout << ans;
    return 0;
}
