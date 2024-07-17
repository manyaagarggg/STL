#include <iostream>
#include <queue>
using namespace std;
#include "treeuse.h"

treeNode<int>* takeInputLevelWise(){
    int rootData ;
    cout<<"enter root date :"<<endl;
    cin>>rootData;
    treeNode <int> *root = new treeNode<int>(rootData);
    queue <treeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        treeNode<int> * front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"enter number of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<< "enter "<<i <<"th child of "<< front->data<<endl;
            cin>>childData;
            treeNode<int> *child = new treeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

// void printLevelWise(treeNode<int> * root){
//      cout<<root->data<<" : ";
//     for(int i=0;i<root->children.size();i++){
//         cout<<root->children[i]->data<<",";
//     }

// }

void printLevelWise(treeNode<int>* root) {
    // Write your code here
    if(root == NULL) {
        return;
    }

    queue<treeNode<int>*> pendingChild;
    pendingChild.push(root);

    while(pendingChild.size() != 0) {
        treeNode<int>* front = pendingChild.front();
        cout << front -> data << ":";
        
        pendingChild.pop();
        for(int i = 0; i < front -> children.size(); i++) {
            pendingChild.push(front->children[i]);
            if(i == front->children.size()-1) {
                cout << front -> children[i] -> data;
            } else {
            	cout << front -> children[i] -> data << ",";
            }
        }
        cout << endl;
    }
}

treeNode<int> * takeInput(){
    int rootData ;
    cout<<"enter date :"<<endl;
    cin>>rootData;
    treeNode <int> *root = new treeNode<int>(rootData);

    int n;
    cout<<"no. of children of "<< rootData<<endl;
    cin>>n;
    for(int i=0; i<n;i++){
        treeNode <int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

void print(treeNode<int> * root){
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        print(root->children[i]);
    }
}

int main(){
    treeNode <int> *root = takeInputLevelWise();
    print(root);
}
 void printlevelWise(treeNode<int>* root){
    if(root==NULL){
        return;
    }

    queue<treeNode<int>*> pendingChild;
    pendingChild.push(root);

    while (pendingChild.size()!=0)
    {
        treeNode<int> *front = pendingChild.front();
        cout<<front->data<<":";

        pendingChild.pop();
        for (int i = 0; i < front->children.size(); i++)
        {
            pendingChild.push(front->children[i]);
            if(i==front->children.size()-1){
                cout<<front->children[i]->data;
            }
            else{
                cout<<front->children[i]->data<<",";
            }
        }
        cout<<endl;
    }
    
 }