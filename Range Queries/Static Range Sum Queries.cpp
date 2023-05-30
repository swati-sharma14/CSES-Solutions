#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long a,b;
    cin >> a >> b;
    vector<long long> nums(a);
    for(long long i=0; i<a; i++){
        long long k;
        cin >> k;
        nums[i] = k;
    }
    vector<long long> total(a);
    total[0] = nums[0];
    for(int i=1; i<a; i++){
        total[i] = total[i-1] + nums[i];
    }
    for(long long i=0; i<b; i++){
        long long start,end;
        cin >> start >> end;
        cout << (total[end-1] - total[start-1] + nums[start-1]) << endl;
    }
}
