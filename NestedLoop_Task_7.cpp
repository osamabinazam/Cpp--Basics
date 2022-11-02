#include<iostream>
using namespace std;
int main(){
    
    for(int i=5; i>=1; i--){
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        int temp=i;
        for (int j = i; j <=5;j++ )
        {
            cout<<temp;
            temp++;
        }
        for( int j=i; j<5; j++){
            cout<<temp;
            temp++;
        }
        cout<<endl;
    }

    return 0;
}