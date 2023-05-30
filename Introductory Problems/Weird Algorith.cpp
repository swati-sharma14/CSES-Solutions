#include <iostream>
using namespace std;
  
// Driver Code
int main(){
    long long a;
    scanf("%lld\n", &a);
    while(a!=1){
        cout << a << " ";
        if(a%2==0){
            a/=2;
        }
        else{
            a = ((3*a) + 1);
        }
    }
    cout << "1";
    return 0;
}
