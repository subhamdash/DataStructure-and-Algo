#include <bits/stdc++.h> 
using namespace std; 

void printNGE(int arr[], int n) { 
  stack <int> s; 
  s.push(arr[n-1]);
    arr[n-1]=-1;
    int t;
    for(int i=n-2;i>=0;i--)
    {
            cout<<i<<" "<<arr[i]<<" "<<s.top()<<endl;
            while(s.empty()==false && s.top()<arr[i])
            {
                cout<<"I am here";
                s.pop();
            }
            if(s.empty())
            {
                cout<<"I am here too";
                s.push(arr[i]);
                arr[i]=-1;
                    continue;
            }
        t=s.top();
        s.push(arr[i]);
        arr[i]=t;     
            
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";    
}

int main() {
     int arr[] = {11, 13, 21, 3}; 
  int n = sizeof(arr) / sizeof(arr[0]); 
  printNGE(arr, n); 
  return 0; 
    
}