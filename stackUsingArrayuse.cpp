class stackUsingArray
{
int *data;
int nextIndex;
int capacity;
public:
stackUsingArray(){
    data = new int[5];
    nextIndex =0;
    capacity=5;
}
bool isEmpty (){
    return nextIndex == 0;
}   
int size(){
    return nextIndex ;
}
void push(int element){
    if(nextIndex==capacity){
       int *newDate = new int[2*capacity];
       for (int i = 0; i < capacity; i++)
       {
        newDate[i]=data[i];
        /* code */
       } 
       capacity *=2;
       delete [] data;
        data = newDate;
        
    }
    data[nextIndex]=element;
    nextIndex++;
}
int pop(){
    if(nextIndex==0){
        cout<<"stack empty"<<endl;
        return __INT_MAX__;

    }
    nextIndex--;
    return data[nextIndex];
}
int top(){
    if (nextIndex==0)
    {
        cout<<"stack empty"<<endl;
        return __INT_MAX__;
 /* code */
    }
    return data[nextIndex-1];
}
};
