class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int len = 0;  
           
        while(*s) {  
            if(*s == ' ') {  
                while(*s && *s == ' ')  
                    ++s;  
                if(*s == 0)  
                    return len;  
                len = 0;  
            }  
            ++len;  
            ++s;  
        }  
           
        return len;  
    }
};