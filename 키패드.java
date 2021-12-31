import java.util.*;

class Solution {
    public int distance(int a, int b){
    int a1=0,a2=0,b1=0,b2=0;
    int count=0;
    if(a==1) a1=0; a2=1;
    if(a==2) a1=0; a2=2;
    if(a==3) a1=0; a2=3;
    if(a==4) a1=1; a2=1;
    if(a==5) a1=1; a2=2;
    if(a==6) a1=1; a2=3;
    if(a==7) a1=2; a2=1;
    if(a==8) a1=2; a2=2;
    if(a==9) a1=2; a2=3;
    if(a==10) a1=3; a2=1;
    if(a==0) a1 =3; a2=2;
    if(a==12) a1=3; a2=3;
    
    if(b==1) b1=0; b2=1;
    if(b==2) b1=0; b2=2;
    if(b==3) b1=0; b2=3;
    if(b==4) b1=1; b2=1;
    if(b==5) b1=1; b2=2;
    if(b==6) b1=1; b2=3;
    if(b==7) b1=2; b2=1;
    if(b==8) b1=2; b2=2;
    if(b==9) b1=2; b2=3;
    if(b==10) b1=3; b2=1;
    if(b==0) b1 =3; b2=2;
    if(b==12) b1=3; b2=3;
    
    count+= (a1>=b1)? a1-b1 : b1-a1;
    count+= (a2>=b2)? a2-b2 : b2-a2;
    return count;
}
    public String solution(int[] numbers, String hand) {
        String result="";
        int[] arr = new int[2];
        arr[0] = 10; //왼
        arr[1] = 12; //오
        for(int i=0;i<numbers.length;i++){
            if(numbers[i]==1 || numbers[i]==4 || numbers[i]==7){
                arr[0] = numbers[i];
                result+="L";
                
            }else if(numbers[i]==3 || numbers[i]==6 || numbers[i]==9){
                arr[1] = numbers[i];
                result+="R";
                
            }else{
                if(distance(numbers[i],arr[0]) < distance(numbers[i],arr[1])){
                    result+="L";
                    arr[0] = numbers[i];
                }else if(distance(numbers[i],arr[0]) > distance(numbers[i],arr[1]))                     {
                    result+="R";
                    arr[1] = numbers[i];
                }else{
                    if(hand.equals("left")) {
                        result+="L";
                    arr[0] = numbers[i];}
                    else if(hand.equals("right")){
                        
                        result+="R";
                        arr[1] = numbers[i];
                    }
                }
            }
        }
        //System.out.println(numbers.length);
        return result;
    }
}
