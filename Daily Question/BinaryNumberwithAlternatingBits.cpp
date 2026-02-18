class Solution {
public:
    bool hasAlternatingBits(int n) {
        //step1: find the binary number
        vector<int> ans;

        while(n>0){
            if(n%2 == 0){
                ans.push_back(0);
            }
            else{
                ans.push_back(1);
            }
            n = n/2;
        }
        for(int i=0 ; i<ans.size()-1 ; i++){
            if(ans[i] == ans[i+1])  return false;
        }
        return true;
    }
};