#include <iostream>

using namespace std;

int main()
{
    int arr[] = {3,6,7,7,8,9,9,9,10};
    
    int size = sizeof(arr)/sizeof(int);
    
    int count;
    int i=0,j=1;
    while(j<size) {
        count = 1;
        j = i+1;
        while(arr[i] == arr[j]) {
            j++;
        }
        count = j-i;
        if(count > 1)
            cout << arr[i] << ":" << count << endl;
        i = j-1;
        i++;
        
    }
    return 0;
}