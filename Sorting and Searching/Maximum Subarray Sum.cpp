#include <stdio.h>
#include <stdlib.h>
 
int main(){
    long long n;
    scanf("%lli ",&n);
    long long arr[n];
    for(int i=0;i<n;i++){
        scanf("%lli ",&arr[i]);
    }
    long long max=-1000000001;
    long long cursum=0;
    for(int i=0;i<n;i++){
        cursum+=arr[i];
        if(cursum>max){
            max=cursum;
        }
        if(cursum<0){
            cursum=0;
        }
    }
    printf("%lli ",max);
}
