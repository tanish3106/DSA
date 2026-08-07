class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp;
        int sum=0;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        for(int i = 0 ; i<s.size();i++){
            if(i<s.length()-1 && mp[s[i]]<mp[s[i+1]]){
                sum-=mp[s[i]];
            }
            else{
                sum+=mp[s[i]];
            }
        }
        return sum;
    }
};