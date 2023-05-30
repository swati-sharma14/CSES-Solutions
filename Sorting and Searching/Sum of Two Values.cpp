#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long a,b;
    cin >> a >> b;
    vector<long long> nums(a);
    map<int,int> map;
    for(int i=0; i<a; i++){
        long long c;
        cin >> c;
        nums[i] = c;
        map[c]+=1;
    }
    for(auto& it:map){
        long long y = b - it.first;
        it.second-=1;
        if(it.second>=0 && map[y]>0){
            long long index1, index2;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]==it.first){
                    index1 = i;
                    break;
                }
            }
            for(int i=0; i<nums.size(); i++){
                if(nums[i]==y && i!=index1){
                    index2 = i;
                    break;
                }
            }
            cout << index1 + 1<< " " << index2 + 1 << endl;
            return 0;
        }
        it.second+=1;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
