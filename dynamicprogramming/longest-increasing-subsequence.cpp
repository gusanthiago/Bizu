#include <algorithm>
#include <vector> 

using namespace std;

#define PB push_back
#define MAXN 100100

vector<int> lis(vector<int> &v){
	
	vector<int> pilha, resp;
	int pos[MAXN], pai[MAXN];
	
	for(int i=0; i<v.size(); i++){
	
		vector<int>::iterator it = lower_bound(pilha.begin(), pilha.end(), v[i]);
		
		int p = it-pilha.begin();
		
		if(it==pilha.end()) pilha.PB(v[i]);
		else *it = x;
		
		pos[p]=i;
		
		if(p==0) pai[i]=-1;	
		else pai[i]=pos[p-1];
	}

	int p = pos[pilha.size()-1];
	
	while(p>=0){
		resp.PB(v[p]);		
		p=pai[p];
	}
	
	reverse(resp.begin(), resp.end());
	
	return resp;
}