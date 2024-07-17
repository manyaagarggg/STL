#include <iostream>
#include<string>
#include <vector>
using namespace std ;

bool isAnagram (string str1 , string str2){
    if(str1.length() != str2.length()){
        return false;
    }

    vector<int> freq(26,0);
    for(int i = 0 ; i <str1.length() ; i ++){
        
        freq[str1[i] - 'a']++;
        
        freq[str2[i] - 'a']--;
    }

    

    for(int i = 0 ;i <26 ; i ++){
        if(freq[i] != 0){
            return false;
        }
    }

    return true;
}

int main(){
    string str1;
    string str2;
    cin>>str1>>str2;

    if(isAnagram(str1, str2)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"f";
    }

   
}