#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows: ";
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        int value = row;
        while(col<=row){
            cout<<value<<" ";
            // cout<<row+(col-1)<<" ";is another way to do this without the variable var
            col++;
            value++;
        }
        cout<<endl;
        row++;
    }
}

