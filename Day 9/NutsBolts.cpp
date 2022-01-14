class Solution {
  public:	
  
	void quicksort(char nuts[], char bolts[], int l, int r) {
	    if(l >= r) return;
	    int c = partition(nuts, bolts, l, r);
	    quicksort(nuts, bolts, l, c - 1);
	    quicksort(nuts, bolts, c + 1, r);
	}
	
	int partition(char nuts[], char bolts[], int l, int r) {
	    int s = l, idx;
	    for(int i = l; i <= r; i++) {
	        if(bolts[i] < nuts[l]) swap(bolts[s++], bolts[i]);
	        if(bolts[i] == nuts[l]) idx = i;
	    }
	    swap(bolts[s], bolts[idx]);
    	for(int i = l; i <= r; i++) {
            nuts[i] = bolts[i];
	    }
	    return s;
	}
	