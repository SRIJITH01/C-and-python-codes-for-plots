#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"
void savedata(char*str,double**mat,int m,int n);
int  main() //main function begins
{
double**B=createMat(3,1);
B[0][0]=-sqrt(3)/2;B[1][0]=0.5;B[2][0]=0;
printf("B=\n");
print(B,3,1);
double**C=createMat(3,1);
C[0][0]=sqrt(3)/2;C[1][0]=0.5;C[2][0]=0;
printf("C=\n");
print(C,3,1);//since B and C lie on a circle choose A such thaTis at 150 degrees to B AND 30 degrees with C
double **P=linalg_sub(C, B, 3, 1);
printf("P=\n");
print(P,3,1);
double s=1/sqrt(3);
int i, j;
double **A;//A=P*s
A= createMat(3,1);

 for(i=0;i<3;i++)
 {
  for(j=0;j<1;j++)
  {
A[i][j]= P[i][j]*s;
  }
 }
printf("A=\n");
print(A,3,1);savedata("A.dat",A,3,1);
return 0;
}
void savedata(char*str,double**mat,int m,int n)
{FILE *fp;
	fp = fopen(str,"w");
	for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  {
fprintf(fp,"%lf ",mat[i][j]);
  }
 fprintf(fp,"\n");
 }
fclose(fp);}


