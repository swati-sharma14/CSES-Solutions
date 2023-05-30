#include <iostream>
using namespace std;
  
// Driver Code
int main(){
    int a;
    long long total=0;
    cin >> a;
    long long tmp,x;
    cin >> tmp;
    for(int i=0; i<a-1; i++){
        cin >> x;
        if(x<tmp) total+=tmp-x;
        else tmp = x;
    }
    cout << total;
    return 0;
}
