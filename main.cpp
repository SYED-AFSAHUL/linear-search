#include <iostream>

using namespace std;

int main()
{
    cout<<"size";
    int n,key;
    bool flag=false;
    cin>>n;
    int arr[n];
    3
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter elements to be searched :- ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            cout<<key<<" found at Position "<<i+1<<endl;
            flag=true;
        }
    }
    if(!flag)
        cout<<key<<" not found.";
    return 0;
}
