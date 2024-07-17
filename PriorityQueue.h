#include <vector>

class PriorityQueue {
    vector<int> pq;

    public:

    PriorityQueue(){

    }
    bool isEmpty(){
        return pq.size()==0;
    }

    int getSize(){
        return pq.size();
    }

    int getMin(){
        if(isEmpty()){
            return 0;
        }
        return pq[0];
    }

    // void insert(int element){
    //     pq.push_back(element);

    //     int childrenIndex = pq.size()-1;
        
    //     while(childrenIndex > 0){
    //     int parentIndex = (childrenIndex -1)/2;

    //     if(pq[childrenIndex]<pq[parentIndex]){
    //         int temp = pq[childrenIndex];
    //         pq[childrenIndex] = pq[parentIndex];
    //         pq[parentIndex] = temp;
    //     }
    //     else{
    //         break;
    //     }
    //     childrenIndex = parentIndex;
    //     }
    // }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() -1;
        while(childIndex>0){
            int parentIndex = (childIndex-1)/2;

            if(pq[parentIndex]< pq[childIndex]){
                int temp = pq[parentIndex];
                pq[parentIndex]=pq[childIndex];
                pq[childIndex]=temp;
            }
            else{
                break;
            }
            childIndex = parentIndex;
        }
        // Implement the insert() function here
    }

     int removeMax() {

        if(isEmpty()){
            return 0;
        }
        int ans = pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();

        int parentIndex = 0;
        int child1 = 2*parentIndex +1;
        int child2 = 2*parentIndex +2;

        while(child1 < pq.size()){
            int maxIndex= parentIndex;
            if(pq[maxIndex]<pq[child1]){
                maxIndex = child1;
            }
            if(child2 < pq.size() && pq[maxIndex]< pq[child2] ){
                maxIndex = child2;
            }
            if(maxIndex == parentIndex){
                break;
            }
            int temp = pq[maxIndex];
            pq[maxIndex] = pq[parentIndex];
            pq[parentIndex] = temp;

            parentIndex = maxIndex;
            child1 = 2*parentIndex +1;
            child2 = 2*parentIndex +2;

        }
        return ans;
        // Implement the removeMax() function here
    }

    int removeMin(){
        if(isEmpty()){
            return 0;
        }
     int ans = pq[0];
     pq[0]=pq[pq.size()-1];
     pq.pop_back();

     int parentIndex = 0;
     int child1 = 2*(parentIndex)+1;
     int child2 = 2*(parentIndex)+2;

     while(child1 < pq.size()){
        int minIndex = parentIndex;
        if(pq[minIndex] > pq[child1]){
            minIndex = child1;
        }
        if( child2 < pq.size() && pq[minIndex]> pq[child2]){
            minIndex = child2;
        }
        if(minIndex==parentIndex){
            break;
        }

        int temp = pq[minIndex];
        pq[minIndex] = pq[parentIndex];
        pq[parentIndex] = temp ;

        parentIndex = minIndex;
        child1 = 2*(parentIndex)+1;
        child2 = 2*(parentIndex)+2;
     }

     return ans;

    }

};