#include<iostream>
using namespace std;
int main(){
    int row=1;
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=n){
            if(row+col<=n+1 ){
                cout<<col;
                // col++;
            }
            else{
                cout<<"*";
                // col++;
            }
            col++;
        }

        cout<<endl;
        row++;
    }


}