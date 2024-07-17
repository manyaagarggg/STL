#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

vector<int> removeDuplicate (int *a , int size){
    vector<int> output ;
    unordered_map<int , bool> seen;
    for(int i =0 ; i<size ; i++){
        if(seen.count(a[i])>0){
            continue;
        }
        seen[a[i]] = true ;
        output.push_back(a[i]);
    }
    return output;
}

int highestFrequenct(int arr[], int n){
    int ans;
    unordered_map<int , int > value;
    for(int i =0; i<n ; i++){
        // int x=0;
        if(value.count(arr[i])>0){
            // x++;
            //continue;
            value[arr[i]]++;
            continue;
        }
        value[arr[i]]= 1;



    }
    int x = 0;
    for(int i =0 ; i < value.size() ; i++){
        
        if(value[arr[i]]>x){
            x = value[arr[i]];
            ans = arr[i];
        }
        
    }
    // int m =0;
    // while (value[arr[m]!= x])
    // {
    //     m++;
    // }
    // ans = arr[m];
    return ans;
}

void  printIntersection(int arr1[], int arr2[], int m, int n) {
    unordered_map<int , int > check;

    for(int i =0 ; i< m;i++){
        if(check.count(arr1[i])>0){
            check[arr1[i]]++;
            continue;
        }
        check[arr1[i]]= 1;

    }

    for(int j = 0; j<n ; j++){
        if(check[arr2[j]]!=0){
            cout<<arr2[j]<<endl;
            check[arr2[j]]--;

        }
    }
}

int pairSum(int *arr, int n) {
    int ans =0 ;
    for(int i= 0 ; i< n; i++){
        for(int j= i+1 ; j <n ;j++){
            if(arr[i]+arr[j]== 0){
                ans++;
            }
            // else {
            //     return 0;
            // }
        }
    }
    return ans;
}

int pairSum1(int *arr, int n){
    int count = 0;
    int number =0;
    unordered_map <int , int > freq ;
    for(int i =0 ; i< n ; i++){
        if(freq[arr[i]]>0){
            number++;
            continue;
        }
        number =1;
    }

    for(int j=0 ; j<n; j++){

    }
}

int main(){

    int a[] = {4,2,2};
    int b[ ] = {2,3,2};


    unordered_map<string , int> ourMap ;
    
    ourMap["abc"] = 1;
    ourMap["def"] = 2;
    ourMap["ghi"] = 3;
    ourMap["jkl"] = 4;
    ourMap["mno"] = 5;

    unordered_map<string , int > :: iterator it = ourMap.begin();
    
    
    unordered_map<string , int > :: iterator it2 = ourMap.find("jkl");
    ourMap.erase(it2);

    while (it != ourMap.end())
    {
        cout<< "key :" << it->first << "value :" << it->second << endl;
        it++;
    }
    
    // int ans = pairSum(a , 5);
    // cout << ans;


    // vector<int> output = removeDuplicate(a,13);

    // for(int i =0 ;i < output.size(); i++){
    //     cout<< output[i]<<endl;
    // }

    // int ans = highestFrequenct(a, 13);
    // cout<<ans << endl;

     //printIntersection(a , b, 3,3);

    // unordered_map <string,int> ourMap;

    // pair<string , int> p ("abc" , 1);
    // ourMap.insert(p);

    // cout<< ourMap["abc"]<<endl;



}