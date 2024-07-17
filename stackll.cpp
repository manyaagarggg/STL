#include <iostream>
using namespace std;


class Node{
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

class stack {
    Node *head;
    int size;
    public :
    stack(){
        head = NULL;
        size =0;
    }

    int getsize(){
        return size;
    }

    void push(int element){
        Node* newNode = new Node(element);
        newNode->next = head;
        head = newNode;
        size ++;
    }

    int pop(){
        if(size==0){
            head= NULL;
            return -1;
        }
        int ans = head->data;
        Node *temp= head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }    
};



int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.getsize()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.getsize()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.getsize()<<endl;
}
/*
class stack{
    Node *head;
    Node *tail;
    public :
    stack(){
        head  = NULL;
        tail =  NULL;
    }
    
    void push(int element){
        
            Node *newNode = new Node(element);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        
    }
    
    Node *pop(){
       
            Node *temp= head;
             Node *ans =  tail;
            while(temp->next!=NULL){
                tail = temp;
            }
            return ans;
     
    }
};

*/