#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define N 3


int cost[6][6]={0,0,0,0,0,0,1,0,0,0,0,2,1,0,0,0,1,1,1,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,1};
int neighbor[6][6]={0,0,0,1,1,0,1,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,1,1,0,0,0,1,1};
int states[6]={1,5,4,54,154,15};
int output=1;
int A[N]={1,5,4};
void main()
{

	double temperature=10.0;
	double alpha=0.999;
	double epsilon=0.01;
	int maxtrials;
	int n=6;
	int target,s,j;
	double x,d,p;
	
	printf("dwse arithmo stoxo: \n");
	
	scanf("%d",&target);
	maxtrials=0;
	srand((unsigned) time(NULL));
	while(temperature>epsilon){
		maxtrials+=1;
		

		s=(rand() % n);
		
		for(j=0; j<n; j++)
		{

			if(states[s]==neighbor[s][j]==1){
				x= ((double) rand() / (RAND_MAX));
				d=states[s]-output;
				if(d<0)
				{
					//output=states[s];
					p=1.0;
				}else{
					
					//if(x<(exp(-d/temperature))){
						//states[s]=output;
					p=(1/(1+exp(d/temperature)));
					}//else{
					//	return(0);	
					//}
				
				
				if(x<p){
					states[s]=output;
				}
				else{
					output=states[s];	
				}
			}				
		}
	
		temperature=alpha*temperature;

		if((maxtrials%27)==0)
		{

			printf("%d",output);
		}
		
	}
	

	printf("%d",output);	
}
