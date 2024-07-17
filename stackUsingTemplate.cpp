template <typename T>
 class stackTemplate
 {
    T *data;
    int nextIndex;
    int capacity ;
    public:
     stackTemplate (){
        data = new T[4];
       nextIndex= 0;
       capacity =4;
     }
     void push(T element){
        if(nextIndex==capacity){
            T *newData = new T[2*capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i]=data[i];
                /* code */
            }
            delete []data;
            data = newData;
            capacity *=2;
        }
        data[nextIndex]=element;
        nextIndex++;
     }
     T pop(){
        if(nextIndex==0){
          
            return __INT_MAX__;
        }
        nextIndex--;
        return data[nextIndex];
        
     }
 };

 #include <iostream>
using namespace std;


int main(){
    stackTemplate<char>t1;
    t1.push(3);
    t1.push(1);
    t1.push(5);
    cout<<t1.pop()<<" "<<t1.pop()<<" "<<t1.pop()<<" ";
}
