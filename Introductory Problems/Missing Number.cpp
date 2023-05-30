#include <iostream>
using namespace std;
  
// Driver Code
int main(){
    long long a;
    scanf("%lld\n", &a);
    long long sum = ((a)*(a+1)/2);
    long long total = 0;
    for(int i=0; i<a-1; i++){
        long long b;
        scanf("%lld ",&b);
        total+=b;
    }
    cout << (sum - total);
    return 0;
}
