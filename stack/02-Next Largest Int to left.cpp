#include <bits/stdc++.h> 
using namespace std; 

void printNGE(int arr[], int n) { 
  stack <int> s; 
  s.push(arr[0]);
    arr[0]=-1;
    int t;
    for(int i=1;i<n;i++)
    {
            cout<<i<<" "<<arr[i]<<" "<<s.top()<<endl;
            while(s.empty()==false && s.top()<arr[i])
            {
                s.pop();
            }
            if(s.empty())
            {
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