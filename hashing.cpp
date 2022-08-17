#include "hashing.hpp"

int hash_string(string s, int m) {
	int m=3;
	int l=s.length();
	char c;
	int hash_val=0;
	for(int i=0; i<l; i++) {
		c=s[i];
		hash_val=(hash_val+int(c))%m;
	}

	return hash_val;
	
}
