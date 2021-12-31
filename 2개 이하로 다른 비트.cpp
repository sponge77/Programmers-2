#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;
long long change(long long n){
    vector<long long> arr;
    stack<long long> stk;
    //string s;
    if(n==0){
        return 1;
    }
    bool flag = true;
    long long x;
    long long sizek;
    long long ans=n;
    while(n!=0){
        x = n%2;
        stk.push(x);
        n = n/2;
    }
    while(!stk.empty()){
        long long k = stk.top();
        arr.push_back(k);
        stk.pop();
    }
    if(arr[arr.size()-1]==0){
        ans = ans+1;
    }else{
        long long s=arr.size();
        for(long long i=arr.size()-1;i>=0;i--){
            if(arr[i]==0){
                flag = false;
                s=i;
                break;
            }
        }
        if(flag==false){
            long long size = arr.size()-1-s;
            sizek = pow(2,size);
            ans+=sizek; 
            long long size2= pow(2,size-1);
            ans-=size2;
        }
        else{
            long long size3 = s;
            sizek = pow(2,size3);
            ans+=sizek;
            long long size4 = pow(2,size3-1);
            ans-=size4;
        }
    }
    return ans;
}
vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    //vector<string> arr(numbers.size(),"");
    for(long long i=0;i<numbers.size();i++){
        answer.push_back(change(numbers[i]));
    }
    return answer;
}
