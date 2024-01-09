#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {3,6,9,10}; int n1 = sizeof(arr1)/sizeof(int);
    int arr2[] = {5,7,8,11,13}; int n2 = sizeof(arr2)/sizeof(int);
    int arr3[n1+n2];
    
    int i=0,j=0,k=0;
    while(i<n1 && j<n2) {
        if(arr1[i] <= arr2[j]) {
            arr3[k++] = arr1[i++];
        } else if(arr1[i] >= arr2[j]) {
            arr3[k++] = arr2[j++];
        }
    }
    
    for(;i<n1;i++) {
        arr3[k++] = arr1[i];
    }
    for(;j<n2;j++) {
        arr3[k++] = arr2[j];
    }
    
    for(int i=0;i<k;i++) {
        cout <<arr3[i] << " ";
    }
    cout << endl;
}