#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int decimalNumber;
    cout<<"Enter a decimal number:";
    cin>>decimalNumber;
    int ans =0;
    int i=0;
    while(decimalNumber!=0){
        int bit = decimalNumber&1;
        ans = (bit * pow(10,i)) + ans;
        decimalNumber = decimalNumber>>1;
        i++;
    }
    cout<<"Binary equivalent is:"<<ans;
    return 0;

}