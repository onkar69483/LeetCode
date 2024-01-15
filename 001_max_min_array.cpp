//O(n)

#include <iostream>

using namespace std;

int main(){
    int arr[] = {3,5, 4, 1, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max,min;
    max=min=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]<min) min=arr[i];
        if(arr[i]>max) max=arr[i];
    }
    cout<<"Max: "<<max<<endl<<"Min: "<<min<<endl;
    return 0;
}