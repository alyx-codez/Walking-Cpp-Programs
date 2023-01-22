#include<iostream>

using namespace std;

int firstocc(int A[], int size, int key) {
    int mid, ans = 0;
    int low = 0;
    int high = size-1;

    while(low<=high) {
        mid = (low+high)/2;
        
        if(A[mid] == key) {
            ans = mid;
            high = mid-1;   //since we're looking for 1st occurence then it must be on the LHS of middile element ! 
        }

        else if(key > A[mid]) {
            low = mid+1;
        }
        
        else {
            high = mid-1;
        }   
    }
    return ans;
}

int lastocc(int A[], int size, int key) {
    int mid, ans = 0;
    int low = 0;
    int high = size-1;

    while(low<=high) {
        mid = (low+high)/2;
        
        if(A[mid] == key) {
            ans = mid;
            low = mid+1;   //since we're looking for last occurence then it must be on the RHS of middile element ! 
        }

        else if(key > A[mid]) {
            low = mid+1;
        }
        
        else {
            high = mid-1;
        }   
    }
    return ans;
}


int main()
{
    pair<int,int> p;
    int A[] = {2,3,3,3,3,3,3,3,5,6,6,7};
    
    p.first = firstocc(A,8,3);
    p.second = lastocc(A,8,3);

    cout << "First element at index : " << p.first << endl;
    cout << "LAst element at index : " << p.second << endl;

}