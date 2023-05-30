#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    long long a;
    cin >> a;
    for(int i=0; i<a; i++){
        long long x,y;
        cin >> x >> y;
        if(x==1 && y==1){
            cout << "1" << endl;
            continue;
        }
        long long b = max(x, y);
        long long count = (b-1)*(b-1);
        if(b%2==1){
            if(x==b){
                count += y;
            }
            else{
                count += 2*b - x;
            }
        }
        else{
            if(y==b){
                count += x;
            }
            else{
                count += 2*b - y;
            }
        }
        cout << count << endl;
    }
    return 0;
}
