
#include<bits/stdc++.h>
using namespace std;




class Solution
{
    public:
    void sort012(int a[], int n)
    {
       int low =0;
       int mid =0;
       int high = n-1;
       while(mid<high){
          
          if(arr[mid]==0){
              swap(arr[mid],arr[low]);
              mid++;
              low--;
            }  
            else if(arr[mid] == 1){
                mid++;
            }
       
              
        }
    }   
    
};


int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


