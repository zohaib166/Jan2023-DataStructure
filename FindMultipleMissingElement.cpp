#include <iostream>

using namespace std;

int main()
{
    int arr[] = {4,5,6,8,9,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int diff = arr[0];
    for(int i=0;i<size;i++) {
        while(arr[i]-i != diff) {
            cout << diff+i << " ";
            diff++;
        }
    }
    cout << endl;
    return 0;
}