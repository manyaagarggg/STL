#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

void print(int arr[] , int size){
    for(int i = 0 ; i < size ; i ++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {0,4,11,6,9,2,5,7};
    sort(arr+4,arr+7);
    for(int i = 0 ; i <8 ; i++){
        cout<<arr[i]<<endl;
    }
    cout<< *max_element(arr, arr+8)<<endl;

    int arr1[6]={0,1,2,3,4,-5};
    all_of(arr1,arr1+6, [](int x) { return x<0 ;})?
    cout <<"negative element presrent" :
    cout <<"no negative"<<endl;

    int arr2[4];
    copy_n(arr1 , 6 , arr2);
    print(arr2,4);

    int arr3[6];
    iota(arr3, arr3+6 , 20);
    print(arr3,6);
    
    
    //all_of , any_of , none_of , copy_n and iota
}