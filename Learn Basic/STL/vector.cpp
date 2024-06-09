#include<bits/stdc++.h>
using namespace std;
//this code is the use of vector 
int main(){
    //give the input size
    int n;
    cin>>n;
    //giving input for the array
    vector<int>v;
    for(int i=0;i<n;i++){
        v.push_back(i);
    }
    cout<<"the array element are:";
    cout<<endl;
    for(vector<int>::iterator it=v.begin(); it!=v.end();it++){
       cout<<*(it)<<" "; 
      
    }
    cout<<endl;
      cout<<endl;
      cout<<"the first element in the vector :"<<v.front()<<endl;
      cout<<"the last element in the vector :"<<v.back()<<endl;
      cout<<"the size of the vector is :"<<v.size()<<endl;
      cout<<"deleting the last element :"<<v[v.size()-1]<<endl;
      cout<<"to inset element :";
      v.insert(v.begin(),13);
    //   v.erase(v.begin());
      //after deleting the element the new array output is 
      cout<<"after inserting  the element the new array :";
      for(int i=0;i<n;i++){
          cout<<v[i]<<" ";
      }
    return 0;
}
//this is the output
// the array element are:
// 0 1 2 3 4 5 6 7 8 9 

// the first element in the vector :0
// the last element in the vector :9
// the size of the vector is :10
// deleting the last element :9
// to inset element :after inserting  the element the new array :13 0 1 2 3 4 5 6 7 8 
// to erase element :after deleting first element the new array :0 1 2 3 4 5 6 7 8 9 
