#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string x;
    int q1,q2;
    int *r1 = new int[arr1.size()];
    
    
    int *r2 = new int[arr1.size()];
    
    
    for(int i=0;i<arr1.size();i++){
        for(int i=0;i<arr1.size();i++){
        r1[i] = 0;
     }
        for(int j=0;j<arr1.size();j++){
        r2[j] = 0;
    }
        x="";
        int k=0;
        do{
            q1=arr1[i]/2;
            r1[k] = arr1[i]%2;
            
            arr1[i]=q1;
            k++;
        }while(q1!=0);
        
        k=0;
        do{
            q2=arr2[i]/2;
            r2[k] = arr2[i]%2;
            
            arr2[i]=q2;
            k++;
            cout<<'a';
        }while(q2!=0);
        
        cout<<r2[4]<<r2[3]<<r2[2]<<r2[1]<<r2[0]<<endl;
        for(int s=arr1.size()-1;s>=0;s--){
            r2[s] = r1[s] || r2[s];
            if(r2[s]==1) x += "#";
            else x+=" ";
        }
        answer.push_back(x);
        
        
    }
    
    return answer;
}
