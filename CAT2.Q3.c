/*
Name: MWANGI DANIEL GITARI
DATE: 6/11/24
REG NO : CT101/G/21346/24
PROGRAM FOR CAT TWO QUESTION THREE 
*/
 



#include <stdio.h>
int main (){
	float hoursworked,hourlywage,grossearn,overtimeearn,regularearn,taxes,netpay;
	
	printf("Enter the hours worked in a week");
	scanf("%f\n", &hoursworked);
	
	printf("Enter the hourlywage");
	scanf("%f\n", &hourlywage);
	
	if (hoursworked>40){
		regularearn=40 * hourlywage;
		overtimeearn=(hoursworked - 40 ) *1.5;
		grossearn =overtimeearn + regularearn;
	}
	else {
		regularearn = hoursworked * hourlywage;
		overtimeearn = 0;
		grossearn= regularearn;
		
	}
	if( grossearn<=600){ taxes = grossearn * 0.15;
	}	else {(taxes = (600*0.15) + (grossearn-600) *0.2);
		}
			
			netpay = grossearn - taxes;
		
		printf ("Grossearn:%.2f\n",grossearn);
		printf("Taxes:%.2f\n",taxes);
		printf("Net pay:%.2f\n",netpay);
		
		return 0;
}
