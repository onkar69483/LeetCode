#include <iostream>

#include <bits/stdc++.h>

using namespace std;

template <class T>

void display(vector<T> &v){
    cout<<"Displaying this vector: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}

int main(){
    vector<int> vec1; // zero length vector
    vector<char> vec2(4); // 4 element character vector
    vector<char> vec3(vec2); // 4 element characer vector rom vec2
    vector<int> vec4(6, 3); // 6 element vector of 3s

    vec2.push_back('c');
    vec3.push_back('d');
    int element, size=5;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1, 45);
    display(vec4);
    return 0;
}