#include <iostream>
using namespace std;

int BinSearch(int A[], int size, int key) { 
    int mid;
    int l = 0;
    int h = size-1;

    while(l<=h) {
        mid = (l+h)/2;
        if(A[mid] == key) {
            return mid;
        }

        else if(key > A[mid]) {
            l = mid+1;
        }
        
        else {
            h = mid-1;
        }   
 
    }
    return -1;
}

int main()
{
    int even[6] = {2,4,6,8,12,18};
    
    int index = BinSearch(even,6,2);
    
    cout << "The index of 12 is : " << index;

    return 0;
}
