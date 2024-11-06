
/*
Name: MWANGI DANIEL GITARI
DATE: 6/11/24
REG NO : CT101/G/21346/24
PROGRAM FOR CAT TWO QUESTION TWO ARRAY
*/
 

#include <stdio.h>
int main (){
	int i,j;
	
	int scores [2][4]={{65,92,84,72},{35,70,59,67}};
		for (i=0;i<2;i++){
		for (j=0;j<4;j++){
			printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
			
		}
	}
	return 0;
	
}
