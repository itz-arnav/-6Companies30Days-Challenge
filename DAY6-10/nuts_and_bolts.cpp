class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	     sort(nuts,nuts+n);
    for(int i=0;i<n;i++){
        bolts[i]=nuts[i];
    }
	}

};
