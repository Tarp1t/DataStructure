#include<stdio.h>
using namespace std;
const int mod = 1000007;
int quickPow(int a,int b){
    int s = 1;
    while(b){
        if(b&1){
            s=(s*a)%mod;
        }
        a= (a*a)%mod;
        b>>=1;
    }
    return s%mod;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int res = quickPow(a,b);
    printf("%d",res);
    return 0;
}