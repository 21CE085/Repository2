#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("Enter Number of Processes:\n");
	scanf("%d",&n);
	printf("Enter Block size\n");
	int blocks[n];
	for(int i = 0 ; i < n ; i++){
	    int bs;
	    scanf("%d",&bs);
	    blocks[i] = bs;
	}
	printf("Enter Process size\n");
	int proc[100];
	for(int i = 0 ; i < n ; i++){
	    int bs;
	    scanf("%d",&bs);
	    proc[i] = bs;
	}
    
    
    int dp[n];
    for(int i = 0 ; i < n ; i++)dp[i]=-1;
    
    for(int i = 0 ; i < n ; i++){
        int mx = -1;
        int ind;
        for(int j = 0 ; j < n ; j++){
            if(blocks[j] > mx && dp[j]==-1){
                mx = blocks[j];
                ind = j;
            }
        }
        if(mx == -1 || proc[i] > blocks[ind]){
            printf("Process size:  %d\t",proc[i]);
            printf("Un Allocated");
            printf("\n");
        }
        else{
            dp[ind] = 1;
            printf("Process size:  %d\t",proc[i]);
            printf("Allocated:  %d",blocks[ind]);
            printf("\n");
        }
    }
}