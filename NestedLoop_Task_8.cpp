#include<iostream>
using namespace std;
int main(){
    
    //Top Of The half Diamod
    for(int i=5; i>=1; i--){
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for (int j = i; j <=5;j++ )
        {
            cout<<"*"; 
        }
        for( int j=i; j<5; j++){
            cout<<"*";   
        }
        cout<<endl;
    }
    return 0;
}