#include<iostream>
using namespace std;
int main()
{
    int arr[10], temp[10], n, i, j, cnt;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"\nEnter the elements: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
        temp[i] = -1;
    }
    for(i=0; i<n; i++){
        cnt = 1;
        for(j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                cnt++;
                temp[j] = 0;
            }
        }
    if(temp[i] != 0){
        temp[i] = cnt;
    }
    }
    cout<<"\nUnique elements in this array are: ";
    for(i=0; i<n; i++){
        if(temp[i] == 1){
            cout<<arr[i]<<", ";
        }
    }
    return 0;
}
