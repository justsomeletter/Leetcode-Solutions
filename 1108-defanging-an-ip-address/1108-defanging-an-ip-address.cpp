class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        int l=address.length();
        
        for(int i=0;i<l;i++){
            if(address[i] == '.'){
                ans += "[.]";
            }
            else{
                ans += address[i];
            }
        }
        return ans;
    }
};