#include <iostream>
using namespace std;

int main()
{
    int n;
    int l=0,h=(n-1),key;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int A[n];
    cout<<"Enter numbers: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    cout<<"Enter the value of key: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==A[i]){
            cout<<"Found at: "<<i;
            return 0;
        }
    }
    
    cout<<"Not found"<<endl;
}
