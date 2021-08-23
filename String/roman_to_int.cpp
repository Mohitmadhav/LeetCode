class Solution {
public:
    int romanToInt(string s) {
        
        int len = s.length();
       
        map<char,int> mp;
        int num=0;
        
        mp.insert(make_pair('I',1));
         mp.insert(make_pair('V',5));
         mp.insert(make_pair('X',10));
         mp.insert(make_pair('L',50));
         mp.insert(make_pair('C',100));
         mp.insert(make_pair('D',500));
         mp.insert(make_pair('M',1000));
        
        for(int i=0;i<len-1;i++ ){
            if(mp[s[i]]<mp[s[i+1]])
                num-=mp[s[i]];
            else
                num+=mp[s[i]];
        }
        
        num+=mp[s[len-1]];
        return num;
    }
};