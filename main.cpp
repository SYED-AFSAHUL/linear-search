#include <iostream>

using namespace std;

int main()
{
   
    int n,key;
    bool flag=false;
    
    cout<<"Enter size of array: ";
    cin>>n;
    
    int* arr=new int[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cin>>key;
    
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            cout<<key<<" found at position "<<i+1<<endl;
            flag=true;
        }
    }
    
    if(!flag)
        cout<<key<<" not found.";
    return 0;
}
