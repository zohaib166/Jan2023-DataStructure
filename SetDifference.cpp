#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin >> n1 >> n2;
    int arr1[n1];
    int arr2[n2];
    
    for(int i=0;i<n1;i++) {
        cin >> arr1[i];
    }
    for(int i=0;i<n2;i++) {
        cin >> arr2[i];
    }

    int arr3[n1>=n2?n1:n2];
    int i,j,k;
    i=j=k=0;
    while(i<n1 && j<n2) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else if(arr2[j] < arr1[i]) {
            j++;
        } else {
            i++;j++;
        }
    }
    if(k>0) {
        for(int i=0;i<k;i++) {
            cout <<arr3[i] << " ";
        }
    }
    else {
        cout << 0;
    }
    cout << endl;
}