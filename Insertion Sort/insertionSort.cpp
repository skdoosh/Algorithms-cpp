#include <iostream>
#include <vector>

using namespace std;

vector<int> insertionSort(vector<int>& A, int n){
    for(int i = 0; i<n; i++){
        int key = A[i];
        int j = i - 1;

        while(j >= 0 && A[j] > key){
            A[j+1] = A[j];
            j--;    
        }
        A[j+1] = key;
    }
    return A;

}

int main(){
    vector<int> in = {5,3,4,2,1,9};
    vector<int> out = insertionSort(in ,6);

    for(int a = 0;a<6;a++){
        cout<<out[a]<<' ';
    }
    return 0;
}