#include <iostream>

using namespace std;

int main()
{
    int arr[] = {3,6,7,7,8,9,9,9,10};
    
    int size = sizeof(arr)/sizeof(int);
    
    int lastDup = -1;
    int count = 1;
    for(int i=0; i<size-1; i++) {
        if(arr[i] == arr[i+1] && arr[i]!=lastDup) {
            cout << arr[i] << endl;
            lastDup = arr[i];
            
        }
    }
    return 0;
}