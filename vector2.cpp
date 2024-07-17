#include <iostream>
#include<vector>
using namespace std;

int main (){

    vector <int > v;

    for(int i = 0 ; i<10; i++){
       cout<<"capacity "<<v.capacity()<<endl;
       cout<<"size "<<v.size()<<endl;
        v.push_back(i+1);
    }

    // for(int i = 0; i<v.size();i++){
    //     cout<< v[i]<<endl;
    // }

}