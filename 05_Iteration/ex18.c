#include <stdio.h>

int main(){
	int sc_cost = 25000, m_cost = 85, cg_cost = 225, sb_cost = 300, a, b, c, total = 0;
	printf("%s", "Base Price\t  Mirror\t  Crash Guard\t  Side box\t  Total\n");
	for(int a = 0; a <= 1; ++a){
		for(int b = 0; b <= 1; ++b){
			for(int c = 0; c <= 1; ++c){
				printf("%d\t\t  %d\t\t  %d\t\t  %d\t\t  %d\n",sc_cost, a, b, c, sc_cost+a*85+b*225+c*300);
			}
			printf("\n");
		}
	}
	return 0;	

}
