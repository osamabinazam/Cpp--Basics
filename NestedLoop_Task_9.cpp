#include<iostream>
using namespace std;
int main(){
    
    //Bottom of half Diamond
    for(int i=1; i<=5-1; i++){

        // int temp=i+1;
        for(int j=1; j<i+1; j++){
            cout<<" ";
        }
        for (int j = i; j <=5-1;j++ )
        {
            cout<<"*"; 
        }
        for( int j=i; j<5-1; j++){
            cout<<"*";   
        }
        cout<<endl;
    }


    return 0;
}