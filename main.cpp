#include <iostream>
using namespace std;

int main()
{
    int n, key;
	bool flag = false;
	cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
	cout << "Enter " << n << " element(s): " << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
	cout << "Enter the element to be searched: ";
    cin >> key;
    for(int i = 0; i < n; i++) {
        if(key == arr[i]) {
            cout << key << " found at position "<< i+1 <<endl;
            flag = true;
        }
    }
    if(!flag)
        cout << key << " not found." << endl;
    return 0;
}
