//sum of array elements using traversal
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
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<sum;
}
