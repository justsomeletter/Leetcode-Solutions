class Solution {
public:
    string interpret(string command) {
        string ans;
        int n = command.length();
        for(int i=0;i<n;i++){
            if(command[i] == 'G') ans += "G";
            else{
                if(command[i+1] == 'a'){
                    ans += "al";
                    i =i+3;
                }
                else{
                    ans += "o";
                    i = i+1;
                }
            }
        }
        return ans;
    }
};