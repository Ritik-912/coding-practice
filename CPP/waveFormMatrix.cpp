/*
Takes input `N` for order of matrix, then take `N` squared
space seperated values for making input matrix.
Output:
prints the input matrix, then print the wave form of
input matrix, it seems somewhat similar Transpose of matrix.
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter order of matrix ";
    cin>>n;
    int *array = new int[n*n];
    cout<<endl<<"Enter array values: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>*(array + i*n +j);
        }
    }
    cout<<endl<<"This is inputed array:"<<endl<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<*(array + i*n +j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"array in wave form: "<<endl;
    // i iterates over column and j over rows
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
            std::cout<<*(array + j*n +i)<<" ";
            }
        }
        else{
            for(int j=n-1; j>=0; j--){
                std::cout<<*(array + j*n +i)<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
