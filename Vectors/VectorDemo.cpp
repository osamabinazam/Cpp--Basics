#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> myvec;
    myvec.push_back(2);
    myvec.push_back(5);
    myvec.push_back(3);
     myvec.push_back(2);
    myvec.push_back(5);
    myvec.push_back(3);
     myvec.push_back(3);
      myvec.push_back(3);
       myvec.push_back(3);
       myvec.resize(5);
   
        cout<<myvec.size()<<endl;
  cout<<myvec.capacity()<<endl;
   myvec.shrink_to_fit();
 cout<<myvec.size()<<endl;
  cout<<myvec.capacity()<<endl;


      for(auto i=myvec.begin(); i!= myvec.end(); ++i)
      {
        cout<<*i<<": ";
      }
    // auto *p=myvec.begin();
    
    
 

    return 0;
}