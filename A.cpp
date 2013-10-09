#include <stdio.h>
#include <fstream> 
#include <iostream>
using namespace std;

int main()
{
 ifstream in; 
 ofstream out; 
 in.open("input.txt");
 out.open("output.txt");
 int N,M,a,b;
 int mat[10000][100];
 for (int i=0; i<10000; i++)
	 for (int j=0; j<100; j++)
		 mat[i][j]=0;
 in>>N>>M;
 if (M==0) return 0;
 for (int i=0; i<N; i++){
	 in>>a>>b;
	 mat[a-1][i]=1;
	 mat[b-1][i]=1;
 }
 for (int i=0; i<N; i++){
	 for (int j=0; j<M; j++)
		 out<<mat[i][j]<<" ";
	 out<<endl;
 }
	 in.close();
     out.close();
	 return 0;
}
