class Solution {
public:
    int square(int num){
        int res = 0;
        while(num != 0){
            int val = num % 10;
            res += (val*val);
            num /= 10;
        }
        return res;
    }
    bool isHappy(int n) {
        map<int,bool> hash;
        int temp = n;
        while(temp != 1){
            if(temp == 1) return true;
            temp = square(temp);
            if(hash.contains(temp)) return false;
            else hash[temp] = true;
        }
        return true;
    }
};