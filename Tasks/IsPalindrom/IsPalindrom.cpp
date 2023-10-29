#include <iostream>
#include <string>

bool IsPalindrom(std::string s) {
	if(s.size() == 0 || s.size() == 1) return true;
	int start = 0, end = s.size() - 1;
	while(start < end) {
    	if(s[start] != s[end])
        	return false;
    	else {
    		++start;
        	--end;
    	}
    return true;
    }
}