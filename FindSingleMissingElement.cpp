#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3,5,6,7,8,9,10,11};
    int size = sizeof(arr)/sizeof(int);
    int diff = arr[0];
    for(int i=0;i<size;i++) {
        if(diff!=arr[i]-i) {
            cout << arr[i]-1 << endl;
            break;
        }
    }
}