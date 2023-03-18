

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

class Solution{
    public:


    bool check(vector<ll> A, vector<ll> B, int N) {

         unordered_map<ll, ll> umap;

        
        for (int i = 0; i < N; i++) {
            umap[A[i]]++;//yha pe ek array sort ho jayega jisse ki 
        }
 
       
        for (int i = 0; i < N; i++) {
            if (umap.find(B[i]) == umap.end()) { //umap.find(B[i] common element dhundega jo ki a mein bhi present honge agar frequency match ho gayi toh return true karenge)
                
            }
            umap[B[i]]--;//fir b decrement ho jayega jisse ki woh ek aur bhi sort ho jayega 
            if (umap[B[i]] < 0) { //agar ye less hoga toh jis wajah se unka size equal nhi hoga isliye return false 
                
                return false;
            }
        }

        return true;
    }
};


int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}
