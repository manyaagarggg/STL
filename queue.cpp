#include <iostream>
using namespace std;
#include <queue>

int main(){
    queue <int> q;
    q.push(20);
    q.push(30);
   
   cout<<q.front()<<endl;
  q.pop();
  cout<<q.front()<<endl;
}