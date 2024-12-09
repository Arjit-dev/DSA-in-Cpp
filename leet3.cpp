class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool match=false;
        int n=s.length();
        string sub = "";
        string sub0="";
            for(int i=0;i<n;i++){
                for(int j=0;j<sub.length();j++){
                    if(sub[j]==s[i]){
                        bool match=true;
                        break;
                    }
                    if(j==sub.length()){
                        sub+=s[i];
                    }
                }
                if(match==true){
                if(sub0.length()<sub.length()){
                    sub0=sub;
                    sub.clear();
                    sub+=s[i];
                }   
            }
            }
        int p=sub0.length();  
        return p;   
}
};