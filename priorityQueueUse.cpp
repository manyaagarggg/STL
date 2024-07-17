#include <iostream>
using namespace std;
// #include "PriorityQueue.h"
#include <queue>
#include <vector>

void heapSort(int arr[], int n) {
    for(int i= 1; i<n ; i++){
        int childIndex = i;
        while(childIndex>0){
            int parentIndex= (childIndex-1)/2;

            if(arr[childIndex] <arr[parentIndex]){
                int temp = arr[childIndex];
                arr[childIndex] = arr[parentIndex];
                arr[parentIndex] = temp;
            }
            else{
                break;
            }
            childIndex = parentIndex;
        }
        
    }
   
       int size = n;
    while(size>1){
        int temp = arr[n-1];
        arr[n-1]= arr[0];
        arr[0]= temp;

        size--;

        int parentIndex = 0;
        int child1 = 2 * parentIndex + 1;
        int child2 = 2 * parentIndex + 2;
        
        while(child1<size){
      
        int minIndex = parentIndex;
        if(arr[minIndex]>arr[child1]){
            minIndex = child1;
        }
        if(child2<size && arr[minIndex]>arr[child2]){
            minIndex = child2;
        }
        if (minIndex == parentIndex) {
          break;
        }
        int temp2 = arr[minIndex];
        arr[minIndex] = arr[parentIndex];
        arr[parentIndex] = temp;

        parentIndex = minIndex;
        child1 = 2 * parentIndex + 1;
        child2 = 2 * parentIndex + 2;
        }
        
    }
}

    // int parentIndex = (i-1)/2;

        // while(arr[(i-1)/2] > arr[i]){
        //     int temp = arr[ (i-1)/2];
        //     arr[(i-1)/2] = arr[i];
        //     arr[i]= temp; 
        //     i = (i-1)/2; 

        // }

        // cout<<arr[n-1]<<" ";
        
        
     // int parentIndex = 0;
    // int child1 = 2 * parentIndex + 1;
    // int child2 = 2 * parentIndex + 2;


    // cout<<endl;
    // int i=0;
    // while(i<x){
    //     cout<<arr[i]<<" ";
    //     i++;
    // }
    // Write your code


void kSortedArray(int input[] , int n , int k){
    priority_queue<int> pq;

    for(int i=0; i<k ;i++){
        pq.push(input[i]);
    }

    int j=0;
    for(int i = k; i<n;i++){
        input[j]= pq.top();
        pq.pop();
        pq.push(input[i]);
        j++;
    }

    while (!pq.empty())
    {
        input[j] = pq.top();
        pq.pop();
        j++;
    }
    


}

vector<int> kSmallest(int input[], int n ,int k){
    priority_queue<int> pq;
    // vector<int > pq;
    vector<int> ans ;
    for(int i=0;i<k;i++){
        pq.push(input[i]);
    }
     for(int i =k ; i<n; i++){
        int j =0;
        while(j<k){
            if(pq.top()< input[i]){

            }
            else{
                pq.pop();
                pq.push(input[i]);
            }
            j++;
        }
        
     }
     for(int i= 0 ; i<k;i++){
        ans[i] =pq.top();
        pq.pop();
     }
     return ans;

}


int main(){
    // priority_queue<int > pq;

    // pq.push(100);
    // pq.push(178);
    // pq.push(28);
    // pq.push(85);
    // pq.push(26);
    // pq.push(34);
    // pq.push(12);
    // pq.push(10);

    // cout<<"size :"<<pq.size()<<endl;
    // cout<<"top :"<<pq.top()<<endl;

    // while (!pq.empty())
    // {
    //     cout<<pq.top()<<endl;
    //     pq.pop();
    // }

    // int input[] = {10, 12, 6, 7, 9};
	// int k = 3;
	// kSortedArray(input, 5, k);
	// for(int i = 0; i < 5; i++) {
	// 	cout << input[i] << " ";
    // }
    // cout<<endl;

    // vector<int > ans = kSmallest(input, 5 , k);
    // for(int i =0; i<k ; i++ ){
    //     cout<< ans[i]<<" "; 
    // }
    int arr[] ={100,10,15,4,17,21,67};
    heapSort(arr, 7);
    for(int i =0; i<7 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // PriorityQueue p;
    // p.insert(100);
    // p.insert(10);
    // p.insert(15);
    // p.insert(4);
    // p.insert(17);
    // p.insert(21);
    // p.insert(67);

    // // int x = p.getSize();
    // cout<< p.getSize() <<endl;
    // cout << p.getMin() << endl;
    
    // while (!p.isEmpty())
    // {
    //    cout<< p.removeMax()<<" ";
    //     /* code */
    // }
    // cout<<endl;
    

}