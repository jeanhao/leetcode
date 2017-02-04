#ifndef STRING_H_
#define STRING_H_

#include <string>
#include <unordered_map>
#include <map>
class _28_Implement_strStr {

public:
	int strStr2(string haystack, string needle) {
		if (needle.empty()) {
			return 0;
		}
		unordered_map < string, int > hmap;
		int lenh = haystack.length(), lenn = needle.length();
		int beginh = 0;
		while (beginh <= lenh - lenn) {
			if(haystack.substr(beginh,lenn) == needle){
				return beginh;
			}
			beginh++;
		}
		return -1;
	}

	int strStr(string haystack, string needle) {
		if (needle.empty()) {
			return 0;
		}
		int lenh = haystack.length(), lenn = needle.length();
		int beginh = 0;
		while (beginh <= lenh - lenn) {
			int index = 0;
			while (index < lenn) {
				if (haystack[beginh + index] == needle[index]) {
					index++;
				} else {
					break;
				}
			}
			if (index == lenn) {
				return beginh;
			}
			beginh++;
		}
		return -1;
	}
};

#endif
