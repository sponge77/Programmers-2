#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <stack>
using namespace std;
void Mapping(map<char, int> &MAP)
{
    MAP['('] = 1;
    MAP[')'] = 1;
    MAP['{'] = 2;
    MAP['}'] = 2;
    MAP['['] = 3;
    MAP[']'] = 3;
}
 
bool Check(string Str, map<char, int> a)
{
    stack<int> Stack;
    for (int i = 0; i < Str.length(); i++)
    {
        if (Str[i] == '(' || Str[i] == '{' || Str[i] == '[') Stack.push(a[Str[i]]);
        else
        {
            if (Stack.empty() == true) return false;
            if (Stack.top() != a[Str[i]]) return false;
            Stack.pop();
        }
    }
    if (Stack.empty() == true) return true;
    return false;
}
 


/*bool symm(string k){
    int len = k.length();
    int cnt=0;
    for(int i=0;i<len;i++){
        if(k[i] == '{') cnt+=2;
        else if(k[i] == '}') cnt-=2;
        else if(k[i] == '[') cnt += 1;
        else if(k[i] == ']') cnt-=1;
        else if(k[i] == '(') cnt+=3;
        else if(k[i] == ')') cnt-=3;
}
    if(cnt == 0) return 1;
    else return 0;
}*/
int solution(string s) {
    //int answer = -1; //대칭형인 경우를 bool로 나타내기
    int count=0;
     map<char, int> a;
    Mapping(a);
    //int ans = 0;
    

    //회전 알고리즘
    int k;
    //if(symm(s)) count++;
    if (Check(s, a) == true) count++;
    int i=0;
    int j;
    if(s.length()>1)
  while(1){
      i++;
      k = s[0];
        for(j=0;j<=s.length()-2;j++){
        s[j] = s[j+1];
    }
        if(j==(s.length()-1)){
            s[j] = k;
        }
      //cout<<s<<' ';
        if(Check(s,a)) count++;
        if(i==(s.length()-1)) break;
    }
    
    
    return count;
}
