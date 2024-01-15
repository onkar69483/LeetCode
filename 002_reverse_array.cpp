#include <iostream>

using namespace std;

int main(){
    int arr[] = {4, 5, 1, 2};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    int revarr[size];
    for(int i=size-1, j=0; i>=0, j<=size-1; i--, j++){
        revarr[j]=arr[i];
    }
    for(int i=0; i<size; i++){
        arr[i]=revarr[i];
    }
    cout<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
