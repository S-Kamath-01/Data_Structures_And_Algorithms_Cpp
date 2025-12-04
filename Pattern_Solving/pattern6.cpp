#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows: ";
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<"*"<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}