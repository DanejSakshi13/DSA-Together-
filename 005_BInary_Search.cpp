//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int N, int key) {
        // code here
        int s = 0;
        int e = N-1;
        while(s<=e){
            int mid = (s+e)/2;
            if(arr[mid]==key){
            return mid;
            }
            else if (arr[mid]>key){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
            //return -1;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends
