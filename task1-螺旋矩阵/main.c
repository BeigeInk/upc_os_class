#include<stdio.h>

int f[4][2]={1,0,0,1,-1,0,0,-1};

int x,y;
char at[100][100];
char t='A';

void mapp(int i,int j,int fac){
	if(at[i][j]) return;
	at[i][j]=t;
	t++;
	if(t<'Z') t='A';
	if(i+f[fac][1]>=x or i+f[fac][1]<0 or j+f[fac][0]>=y or j+f[fac][0]<0 or at[i+f[fac][1]][j+f[fac][0]]){
		fac=(fac+1)%4;}
	mapp(i+f[fac][1],j+f[fac][0],fac);
}

int main(){
	scanf("%d %d",&x,&y);
	mapp(0,0,0);
	for(int i=0;i<=x;i++){
		for(int j=0;j<=y;j++)
			printf("%c ",at[i][j]);
		printf("\n");
	}
			
	return 0;
}
