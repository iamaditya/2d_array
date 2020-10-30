#include <iostream>

using namespace std;

int main(){
    int arr[3][3]; // first 3 is for row whereas 2nd 3 is for columns 
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}