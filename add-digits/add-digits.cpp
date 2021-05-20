class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        while(num>=10){
            while(num>0){
                sum= sum+ num%10;
                num=num/10;
            }
            num = sum;
            sum=0;

        }
        
        return num;
    }
};