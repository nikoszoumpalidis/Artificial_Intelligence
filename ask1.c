#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char TK[4][4]={'R', 'R', 'R', 'R', 'G', 'G', 'G', 'G', 'B', 'B', 'B', 'B', 'Y', 'Y', 'Y', 'Y'};

/*void shiftup(char AK[4][4], int j)
{
	int i;
	int n;
	n=0;
	for(i=0; i<3; i++){
		AK[i][j]=AK[i+1][j];
	}
	AK[n+3][j]=AK[n-3][j];
}
*/

/*
void shiftup(char AK[4][4], int j)
{
	int i,r,temp;
	r =3;
	for(i=0; i<4; i++)
	{
		
		temp = AK[r][j];
		if((r-1)>=0)
		{
			AK[r][j] = AK[r-1][j];
			r--;
		}
		AK[r][j] = temp;
	}
}

*/

/*void shiftdown(char AK[4][4], int j)
{
	int i,r,temp;
	r =0;
	for(i=0; i<4; i++)
	{
		
		temp = AK[r][j];
		if((r+1)>=0)
		{
			AK[r+1][j] = AK[r][j];
			r++;
		}
		AK[r][j] = temp;
	}
}

*/

/*void shiftdown(char AK[4][4], int j)
{
	int i;
	int n;
	n=0;
	for(i=0; i<3; i++){
		AK[i+1][j]=AK[i][j];
	}
	AK[n-3][j]=AK[n][j];
}

*/


void shiftup(char AK[4][4], int j)
{
	int temp1,temp2,temp3,temp4;

	temp1=AK[3][j];
	temp2=AK[2][j];
	temp3=AK[1][j];
	temp4=AK[0][j];
	AK[2][j]=AK[3][j];
	AK[1][j]=temp2;
	AK[0][j]=temp3;
	AK[3][j]=temp4;

}


void shiftdown(char AK[4][4], int j)
{
	int temp1,temp2,temp3,temp4;

	temp1=AK[0][j];
	temp2=AK[1][j];
	temp3=AK[2][j];
	temp4=AK[3][j];
	AK[2][j]=temp2;
	AK[3][j]=temp3;
	AK[0][j]=temp4;
	AK[1][j]=temp1;

}

void shiftleft(char AK[4][4], int i)
{
	int temp1,temp2,temp3,temp4;
	temp1=AK[i][0];
	temp2=AK[i][3];
	temp3=AK[i][2];
	temp4=AK[i][1];
	AK[i][3]=temp1;
	AK[i][2]=temp2;
	AK[i][1]=temp3;
	AK[i][0]=temp4;

}


void shiftright(char AK[4][4], int i)
{
	int temp1,temp2,temp3,temp4;
	temp1=AK[i][0];
	temp2=AK[i][1];
	temp3=AK[i][2];
	temp4=AK[i][3];
	AK[i][1]=temp1;
	AK[i][2]=temp2;
	AK[i][3]=temp3;
	AK[i][0]=temp4;	

}

void main()
{
	int i,j,r0,r1,r2;
	char AK[4][4];
	char x;
	int H[4][4];
	
	for(i=0; i<4; i++)
		for(j=0; j<4; j++){
			scanf(" %c",&AK[i][j]);
			if(AK[i][j]!='R' && AK[i][j]!='Y' && AK[i][j]!='G' && AK[i][j]!='B'){
				printf("Wrong input");
				printf("\n");
				exit(1);
			}
		}
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf(" %c",AK[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf(" %c",TK[i][j]);
		}
		printf("\n");
	}
		


if(AK[0][0]=='R')
	H[0][0]=0;
if(AK[0][0]=='G')
	H[0][0]=1;
if(AK[0][0]=='B')
	H[0][0]=2;
if(AK[0][0]=='Y')
	H[0][0]=1;
if(AK[0][1]=='R')
	H[0][1]=0;
if(AK[0][1]=='G')
	H[0][1]=1;
if(AK[0][1]=='B')
	H[0][1]=2;
if(AK[0][1]=='Y')
	H[0][1]=1;
if(AK[0][2]=='R')
	H[0][2]=0;
if(AK[0][2]=='G')
	H[0][2]=1;
if(AK[0][2]=='B')
	H[0][2]=2;
if(AK[0][2]=='Y')
	H[0][2]=1;
if(AK[0][3]=='R')
	H[0][3]=0;
if(AK[0][3]=='G')
	H[0][3]=1;
if(AK[0][3]=='B')
	H[0][3]=2;
if(AK[0][3]=='Y')
	H[0][3]=1;
if(AK[1][0]=='R')
	H[1][0]=1;
if(AK[1][0]=='G')
	H[1][0]=0;
if(AK[1][0]=='B')
	H[1][0]=1;
if(AK[1][0]=='Y')
	H[1][0]=2;
if(AK[1][1]=='R')
	H[1][1]=1;
if(AK[1][1]=='G')
	H[1][1]=0;
if(AK[1][1]=='B')
	H[1][1]=1;
if(AK[1][1]=='Y')
	H[1][1]=2;
if(AK[1][1]=='R')
	H[1][1]=1;
if(AK[1][1]=='G')
	H[1][1]=0;
if(AK[1][2]=='B')
	H[1][2]=1;
if(AK[1][2]=='Y')
	H[1][2]=2;
if(AK[1][3]=='R')
	H[1][3]=1;
if(AK[1][3]=='G')
	H[1][3]=0;
if(AK[1][3]=='B')
	H[1][3]=1;
if(AK[1][3]=='Y')
	H[1][3]=2;
if(AK[2][0]=='R')
	H[2][0]=2;
if(AK[2][0]=='G')
	H[2][0]=1;
if(AK[2][0]=='B')
	H[2][0]=0;
if(AK[2][0]=='Y')
	H[2][0]=1;
if(AK[2][1]=='R')
	H[2][1]=2;
if(AK[2][1]=='G')
	H[2][1]=1;
if(AK[2][1]=='B')
	H[2][1]=0;
if(AK[2][1]=='Y')
	H[2][1]=1;
if(AK[2][2]=='R')
	H[2][2]=2;
if(AK[2][2]=='G')
	H[2][2]=1;
if(AK[2][2]=='B')
	H[2][2]=0;
if(AK[2][2]=='Y')
	H[2][2]=1;
if(AK[2][3]=='R')
	H[2][3]=2;
if(AK[2][3]=='G')
	H[2][3]=1;
if(AK[2][3]=='B')
	H[2][3]=0;
if(AK[2][3]=='Y')
	H[2][3]=1;
if(AK[3][0]=='R')
	H[3][0]=1;
if(AK[3][0]=='G')
	H[3][0]=2;
if(AK[3][0]=='B')
	H[3][0]=1;
if(AK[3][0]=='Y')
	H[3][0]=0;
if(AK[3][1]=='R')
	H[3][1]=1;
if(AK[3][1]=='G')
	H[3][1]=2;
if(AK[3][1]=='B')
	H[3][1]=1;
if(AK[3][1]=='Y')
	H[3][1]=0;
if(AK[3][2]=='R')
	H[3][2]=1;
if(AK[3][2]=='G')
	H[3][2]=2;
if(AK[3][2]=='B')
	H[3][2]=1;
if(AK[3][2]=='Y')
	H[3][2]=0;
if(AK[3][3]=='R')
	H[3][3]=1;
if(AK[3][3]=='G')
	H[3][3]=2;
if(AK[3][3]=='B')
	H[3][3]=1;
if(AK[3][3]=='Y')
	H[3][3]=0;


printf("\n");

for(i=0; i<4; i++){
	for(j=0; j<4; j++){
		printf(" %d",H[i][j]);
	}
	printf("\n");
}

printf("\n");
printf("\n");


/*if(H[1][1]==1){
	shiftup(AK,1);
	if(AK[1][1]==TK[1][1])
		printf("AK[1][1] => AK[0][1]");
	else
		shiftdown(AK,1);
}

*/
/*if(H[1][1]==1){
	shiftdown(AK,1);
	if(AK[1][1]==TK[1][1])
		printf("AK[1][1] => AK[2][1]");
}	

	printf("\n");
	printf("\n");

*/

for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf(" %c",AK[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");



for(i=0; i<4; i++){
switch (i){
		case 0:
	for(j=0; j<4; j++){
		if(j==0){
			r0=4;
			r1=0;
			r2=0;
		}
		if(j==1){
			r0=0;
			r1=4;
			r2=0;
		}
		if(j==2){
			r0=0;
			r1=0;
			r2=4;
		}
		if(j==3){
			r0=0;
			r1=0;
			r2=0;
		}	
		if(H[i][j]==1){
			if(AK[i][j]=='G'){
				if(AK[i][j]==TK[i+1][j]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i,j-1+r0);
					printf("\n");
				}
				else{
					shiftdown(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i+1,j);
					printf("\n");
				}
				if(AK[i][j-1+r0]==TK[i+1][j-1+r0]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i,j-2+r0+r1);
					printf("\n");
				}	
				else{
					shiftdown(AK,j-1+r0);
			
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i+1,j-1+r0);
					printf("\n");
				}	
					if(AK[i][j-2+r0+r1]==TK[i+1][j-2+r0+r1]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i,j-3+r0+r1+r2);
					printf("\n");
				}
				else{
					shiftdown(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i+1,j-2+r0+r1);
					printf("\n");
				}	
			
			//if(AK[i][j-3]==TK[i+3][j-3]){
				//shiftleft(AK,0);
				shiftdown(AK,j-3+r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3+r0+r1+r2,i+1,j-3+r0+r1+r2);
				printf("\n");
				
				
			}
			
			if(AK[i][j]=='Y'){
				if(AK[i][j]==TK[i+3][j]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i,j-1+r0);
					printf("\n");
				}
				else{
					shiftup(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i+3,j);
					printf("\n");
				}
			
				if(AK[i][j-1+r0]==TK[i+3][j-1+r0]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i,j-2+r0+r1);
					printf("\n");
				}	
				else{
					shiftup(AK,j-1+r0);
			
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i+3,j-1+r0);
					printf("\n");
				}
			
				if(AK[i][j-2+r0+r1]==TK[i+3][j-2+r0+r1]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i,j-3+r0+r1+r2);
					printf("\n");
				}
				else{
					shiftup(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i+3,j-2+r0+r1);
					printf("\n");
				}	
			
			//if(AK[i][j-3]==TK[i+3][j-3]){
				//shiftleft(AK,0);
				shiftup(AK,j-3+r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3+r0+r1+r2,i+3,j-3+r0+r1+r2);
				printf("\n");
			//}
			//else
				//shiftdown(AK,j);
			
		}
	}
	
	if(H[i][j]==2){
		
				if(AK[i][j]==TK[i+2][j]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i,j-1+r0);
					printf("\n");
				}
				else{
					shiftdown(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i+2,j);
					printf("\n");
					shiftdown(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i+2,j);
					printf("\n");
				}
				if(AK[i][j-1 +r0]==TK[i+2][j-1 +r0]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1 + r0 ,i,j-2 +r0+r1);
					printf("\n");
				}	
				else{
					shiftdown(AK,j-1 + r0);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1 + r0,i+2,j-1+ r0);
					printf("\n");
					shiftdown(AK,j-1 + r0);
			
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1 + r0,i+2,j-1+ r0);
					printf("\n");
				}	
					if(AK[i][j-2+r0+r1]==TK[i+2][j-2+r0+r1]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2 +r0+r1,i,j-3+r0+r1+r2);
					printf("\n");
				}
				else{
					shiftdown(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2 +r0+r1,i+3,j-2+r0+r1);
					printf("\n");
					shiftdown(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2 +r0+r1,i+3,j-2+r0+r1);
					printf("\n");
				}	
			
			//if(AK[i][j-3]==TK[i+3][j-3]){
				//shiftleft(AK,0);
				shiftdown(AK,j-3 +r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3 +r0+r1+r2,i+2,j-3+r0+r1+r2);
				printf("\n");
				shiftdown(AK,j-3 +r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3 +r0+r1+r2,i+2,j-3+r0+r1+r2);
				printf("\n");
				
				
			}
			
	}

break;
/*for(i=1; i<3; i++){
	for(j=0; j<4; j++)
		if(H[i][j]==1){
			shiftup(AK,j);
			if(AK[i][j]==TK[i][j]){
				printf("AK[%d][%d] => AK[%d-1][%d]",i,j,i,j);
				printf("\n");	
			}
			else
				shiftdown(AK,j);
			
		}

}

i=3;
	for(j=0; j<4; j++){
		if(H[i][j]==1){
			shiftdown(AK,j);
			if(AK[i][j]==TK[i][j]){
				printf("AK[%d][%d] => AK[%d-3][%d]",i,j,i,j);
			printf("\n");
		}
		}

	}

*/

case 3:
for(j=0; j<4; j++){
		if(j==0){
			r0=4;
			r1=0;
			r2=0;
		}
		if(j==1){
			r0=0;
			r1=4;
			r2=0;
		}
		if(j==2){
			r0=0;
			r1=0;
			r2=4;
		}
		if(j==3){
			r0=0;
			r1=0;
			r2=0;
		}	
		if(H[i][j]==1){
			if(AK[i][j]=='B'){
				if(AK[i][j]==TK[i-1][j]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i,j-1+r0);
					printf("\n");
				}
				else{
					shiftup(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i-1,j);
					printf("\n");
				}
				if(AK[i][j-1+r0]==TK[i-1][j-1+r0]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i,j-2+r0+r1);
					printf("\n");
				}	
				else{
					shiftup(AK,j-1+r0);
			
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i-1,j-1+r0);
					printf("\n");
				}	
					if(AK[i][j-2+r0+r1]==TK[i-1][j-2+r0+r1]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i,j-3+r0+r1+r2);
					printf("\n");
				}
				else{
					shiftup(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i-1,j-2+r0+r1);
					printf("\n");
				}	
			
			//if(AK[i][j-3]==TK[i+3][j-3]){
				//shiftleft(AK,0);
				shiftdown(AK,j-3+r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3+r0+r1+r2,i-1,j-3+r0+r1+r2);
				printf("\n");
				
				
			}
			
			if(AK[i][j]=='R'){
				if(AK[i][j]==TK[i-3][j]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i,j-1+r0);
					printf("\n");
				}
				else{
					shiftdown(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i-3,j);
					printf("\n");
				}
			
				if(AK[i][j-1+r0]==TK[i-3][j-1+r0]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i,j-2+r0+r1);
					printf("\n");
				}	
				else{
					shiftup(AK,j-1+r0);
			
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i-3,j-1+r0);
					printf("\n");
				}
			
				if(AK[i][j-2+r0+r1]==TK[i-3][j-2+r0+r1]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i,j-3+r0+r1+r2);
					printf("\n");
				}
				else{
					shiftup(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i-3,j-2+r0+r1);
					printf("\n");
				}	
			
			//if(AK[i][j-3]==TK[i+3][j-3]){
				//shiftleft(AK,0);
				shiftup(AK,j-3+r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3+r0+r1+r2,i-3,j-3+r0+r1+r2);
				printf("\n");
			//}
			//else
				//shiftdown(AK,j);
			
		}
}

if(H[i][j]==2){
		
				if(AK[i][j]==TK[i-2][j]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i,j-1+r0);
					printf("\n");
				}
				else{
					shiftup(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i-2,j);
					printf("\n");
					shiftup(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i-2,j);
					printf("\n");
				}
				if(AK[i][j-1 +r0]==TK[i-2][j-1 +r0] ){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i,j-2+r0+r1);
					printf("\n");
				}	
				else{
					shiftup(AK,j-1 + r0);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i-2,j-1+r0);
					printf("\n");
					shiftup(AK,j-1 + r0);
			
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i-2,j-1+r0);
					printf("\n");
				}	
					if(AK[i][j-2+r0+r1]==TK[i-2][j-2+r0+r1]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i,j-3+r0+r1+r2);
					printf("\n");
				}
				else{
					shiftup(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i-3,j-2+r0+r1);
					printf("\n");
					shiftup(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i-3,j-2+r0+r1);
					printf("\n");
				}	
			
			//if(AK[i][j-3]==TK[i+3][j-3]){
				//shiftleft(AK,0);
				shiftdown(AK,j-3 +r0+r1+r2);
				shiftdown(AK,j-3 +r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3+r0+r1+r2,i+2,j-3+r0+r1+r2);
				printf("\n");
				
				
			}


}

break;

case 1:


for(j=0; j<4; j++){
		if(j==0){
			r0=4;
			r1=0;
			r2=0;
		}
		if(j==1){
			r0=0;
			r1=4;
			r2=0;
		}
		if(j==2){
			r0=0;
			r1=0;
			r2=4;
		}
		if(j==3){
			r0=0;
			r1=0;
			r2=0;
		}	
		if(H[i][j]==1){
			if(AK[i][j]=='R'){
				if(AK[i][j]==TK[i-1][j]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i,j-1+r0);
					printf("\n");
				}
				else{
					shiftup(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i-1,j);
					printf("\n");
				}
				if(AK[i][j-1+r0]==TK[i-1][j-1+r0]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i,j-2+r0+r1);
					printf("\n");
				}	
				else{
					shiftup(AK,j-1+r0);
			
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i-1,j-1+r0);
					printf("\n");
				}	
					if(AK[i][j-2+r0+r1]==TK[i-1][j-2+r0+r1]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i,j-3+r0+r1+r2);
					printf("\n");
				}
				else{
					shiftup(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i-1,j-2+r0+r1);
					printf("\n");
				}	
			
			//if(AK[i][j-3]==TK[i+3][j-3]){
				//shiftleft(AK,0);
				shiftdown(AK,j-3+r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3+r0+r1+r2,i-1,j-3+r0+r1+r2);
				printf("\n");
				
				
			}
			
			if(AK[i][j]=='B'){	
				if(AK[i][j]==TK[i+1][j]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i,j-1+r0);
					printf("\n");
				}
				else{
					shiftdown(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i+1,j);
					printf("\n");
				}
			
				if(AK[i][j-1+r0]==TK[i+1][j-1+r0]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i,j-2+r0+r1);
					printf("\n");
				}	
				else{
					shiftdown(AK,j-1+r0);
			
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i+3,j-1+r0);
					printf("\n");
				}
			
				if(AK[i][j-2+r0+r1]==TK[i+1][j-2+r0+r1]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i,j-3+r0+r1+r2);
					printf("\n");
				}
				else{
					shiftdown(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i+1,j-2+r0+r1);
					printf("\n");
				}	
			
			//if(AK[i][j-3]==TK[i+3][j-3]){
				//shiftleft(AK,0);
				shiftdown(AK,j-3+r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3+r0+r1+r2,i+1,j-3+r0+r1+r2);
				printf("\n");
			//}
			//else
				//shiftdown(AK,j);
			
		}
	}
	
	
	if(H[i][j]==2){
		
				if(AK[i][j]==TK[i+2][j]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i,j-1+r0);
					printf("\n");
				}
				else{
					shiftdown(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i+2,j);
					printf("\n");
					shiftdown(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i+2,j);
					printf("\n");
				}
				if(AK[i][j-1+r0]==TK[i+2][j-1+r0]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i,j-2+r0+r1);
					printf("\n");
				}	
				else{
					shiftdown(AK,j-1 + r0);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i+2,j-1+r0);
					printf("\n");
					shiftdown(AK,j-1 + r0);
			
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i+2,j-1+r0);
					printf("\n");
				}	
					if(AK[i][j-2+r0+r1]==TK[i+2][j-2+r0+r1]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i,j-3+r0+r1+r2);
					printf("\n");
				}
				else{
					shiftdown(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i+2,j-2+r0+r1);
					printf("\n");
					shiftdown(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i+2,j-2+r0+r1);
					printf("\n");
				}	
			
			//if(AK[i][j-3]==TK[i+3][j-3]){
				//shiftleft(AK,0);
				shiftdown(AK,j-3 +r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3+r0+r1+r2,i+2,j-3+r0+r1+r2);
				printf("\n");
				shiftdown(AK,j-3 +r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3+r0+r1+r2,i+2,j-3+r0+r1+r2);
				printf("\n");
				
				
			}
			
	}
break;

case 2:

for(j=0; j<4; j++){
		if(j==0){
			r0=4;
			r1=0;
			r2=0;
		}
		if(j==1){
			r0=0;
			r1=4;
			r2=0;
		}
		if(j==2){
			r0=0;
			r1=0;
			r2=4;
		}
		if(j==3){
			r0=0;
			r1=0;
			r2=0;
		}	
		
		if(H[i][j]==1){
			if(AK[i][j]=='G'){
				if(AK[i][j]==TK[i-1][j]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i,j-1+r0);
					printf("\n");
				}
				else{
					shiftup(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i-1,j);
					printf("\n");
				}
				if(AK[i][j-1+r0]==TK[i-1][j-1+r0]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i,j-2+r0+r1);
					printf("\n");
				}	
				else{
					shiftup(AK,j-1+r0);
			
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i-1,j-1+r0);
					printf("\n");
				}	
					if(AK[i][j-2+r0+r1]==TK[i-1][j-2+r0+r1]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i,j-3+r0+r1+r2);
					printf("\n");
				}
				else{
					shiftup(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i-1,j-2+r0+r1);
					printf("\n");
				}	
			
			//if(AK[i][j-3]==TK[i+3][j-3]){
				//shiftleft(AK,0);
				shiftdown(AK,j-3+r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3+r0+r1+r2,i-1,j-3+r0+r1+r2);
				printf("\n");
				
				
			}
			
			if(AK[i][j]=='Y'){
				
				if(AK[i][j]==TK[i+1][j]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i,j-1+r0);
					printf("\n");
				}
				else{
					shiftdown(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i+1,j);
					printf("\n");
				}
			
				if(AK[i][j-1+r0]==TK[i+1][j-1+r0]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i,j-2+r0+r1);
					printf("\n");
				}	
				else{
					shiftdown(AK,j-1+r0);
			
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1+r0,i+3,j-1+r0);
					printf("\n");
				}
			
				if(AK[i][j-2+r0+r1]==TK[i+1][j-2+r0+r1]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i,j-3+r0+r1+r2);
					printf("\n");
				}
				else{
					shiftdown(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2+r0+r1,i+1,j-2+r0+r1);
					printf("\n");
				}	
			
			//if(AK[i][j-3]==TK[i+3][j-3]){
				//shiftleft(AK,0);
				shiftdown(AK,j-3+r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3+r0+r1+r2,i+1,j-3+r0+r1+r2);
				printf("\n");
			//}
			//else
				//shiftdown(AK,j);
			
		}
	}
	
	
	if(H[i][j]==2){
		
				if(AK[i][j]==TK[i+2][j]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i,j-1+r0);
					printf("\n");
				}
				else{
					shiftdown(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i+2,j);
					printf("\n");
					shiftup(AK,j);
					printf("AK[%d][%d] => AK[%d][%d]",i,j,i+2,j);
					printf("\n");
				}
				if(AK[i][j-1+r0]==TK[i+2][j-1+r0]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1 + r0 ,i,j-2 +r0+r1 );
					printf("\n");
				}	
				else{
					shiftup(AK,j-1 + r0);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1 + r0,i+2,j-1+ r0 );
					printf("\n");
					shiftup(AK,j-1 + r0);
			
					printf("AK[%d][%d] => AK[%d][%d]",i,j-1 + r0,i+2,j-1+ r0 );
					printf("\n");
				}	
					if(AK[i][j-2+ r0+r1]==TK[i+2][j-2+r0+r1]){
					shiftleft(AK,i);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2 +r0+r1,i,j-3+r0+r1+r2);
					printf("\n");
				}
				else{
					shiftup(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2 +r0+r1,i+2,j-2+r0+r1);
					printf("\n");
					shiftup(AK,j-2+r0+r1);
					printf("AK[%d][%d] => AK[%d][%d]",i,j-2 +r0+r1,i+2,j-2+r0+r1);
					printf("\n");
				}	
			
			//if(AK[i][j-3]==TK[i+3][j-3]){
				//shiftleft(AK,0);
				shiftup(AK,j-3 +r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3 +r0+r1+r2,i+2,j-3+r0+r1+r2);
				printf("\n");
				shiftup(AK,j-3 +r0+r1+r2);
				printf("AK[%d][%d] => AK[%d][%d]",i,j-3 +r0+r1+r2,i+2,j-3+r0+r1+r2);
				printf("\n");
				
				
			}
			
	}

break;


}

}
for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf(" %c",AK[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");



}
