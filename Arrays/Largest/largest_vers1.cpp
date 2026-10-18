//largest element in array using traversal
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cin>>size;
    vector<int> arr;
    for(int i=0;i<size;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    int largest=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest;
}
