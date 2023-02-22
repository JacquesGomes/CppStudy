#include <iostream>
#include <utility>

using namespace std;

void permute(int *nums, int size, int n){
    if(size == 0){
        //found a valid permutation
        for(int i=0; i<n;i++){
            cout << nums[i] << " ";
        }
        cout << endl;
        return;
    }
    
    for(int i=0; i<size; i++){
        swap(nums[i], nums[size-1]);

        permute(nums, size-1, n);

        swap (nums[i], nums[size-1]);

    }
    
}

int main (){

    int nums[] = {1, 2, 3};
    int n = sizeof(nums) / sizeof(int);
    permute(nums, n, n);
    return 0;
}