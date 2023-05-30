#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int a;
    cin >> a;
    if(a==2 || a==3){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    else if(a==1){
        cout << "1";
        return 0;
    }
    else if(a==4){
        cout << "2 4 1 3";
        return 0;
    }
    vector<int> nums(a,0);
    if(a%2==0){
        for(int i=0; i<(a/2); i++){
            nums[2*i] = i+1;
        }
        for(int i=1; i<(a/2)+1; i++){
            nums[(2*i)-1] = (a/2) + i;
        }
    }
    else{
        for(int i=0; i<(a/2)+1; i++){
            nums[2*i] = i+1;
        }
        for(int i=1; i<(a/2)+1; i++){
            nums[(2*i)-1] = (a/2) + i + 1;
        }
    }
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
}
