#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int wel();
float gdtotal();

struct item{
	double fruit;
	double rice;
	double biscuit;
};

void line(){
	int i;
	for(i = 0;i<=100;i++){
		printf("-");
	}
}


char GSTIN_NUMBER[11] = {"XX10XY2F022"};


int d_t(){
	system("color 0F");
	int i;
	for(i=0;i<=100;i++){
		printf("-");
	}
	printf("\n");
	char date,month,year;
	date = 'd';
	month = 'm';
	year = 'y';
	printf("date : %c/%c/%c",date,month,year);
	printf("\t\t\t\t\t\t");
	printf("time   : ");
	int sec,minute,hour;
	sec=minute=hour=0;
	printf("%02d : %02d : %02d\n",hour,minute,hour);
	line();
	printf("\n");
}

int main(){//main
	wel();
	struct item obj1;
	obj1.biscuit = 10;
	obj1.fruit = 12;
	obj1.rice = 90;
//	printf("Add Unit PRICE : \n");
//	printf("biscuit : ");
//	scanf("%f",&obj1.biscuit);
//	printf("fruit : ");
//	scanf("%f",&obj1.fruit);
//	printf("rice : ");soha
//	scanf("%f",&obj1.rice);
	system("cls");
	int i,r;
	line();
	printf("\n");
	printf("\t\t\t\t\tWelcome to xyz mart\n");
	line();
	printf("\n");
	printf("ENTER YOUR NAME \n : ");
	char name[35];
	scanf("%s",&name);
	system("cls");
	printf("Add items in card\n1.rice\n2.biscuit\n3.fruit\n");
	int it_sl;
	scanf("%d",&it_sl);
	float quantity;
	printf("Enter Quantity\n");
	scanf("%f",&quantity);
	float total_val;
	if(it_sl == 1){
		total_val = quantity * obj1.rice;
//		printf("%f",total_val);
	}
	else if(it_sl == 2){
		total_val = quantity * obj1.biscuit;
//		printf("%f",total_val);
	}
	else if(it_sl == 3){
		total_val = quantity * obj1.fruit;
//		printf("%f",total_val);
	}
	else{
		system("color 04");
		printf("item is not available \n");
	}
	system("cls");
	
	// GST
	float SGST,CGST;
	SGST = CGST = 9;
	
	
	//// invoice printing
	int n;
	printf("\t\t\t\t\tUSER's INVOICE\n");
	line();
	printf("\n");
	printf("GSTIN NUMBER :  ");
	int gst_n;
	for(gst_n = 0;gst_n <= strlen(GSTIN_NUMBER);gst_n++){
		printf("%c",GSTIN_NUMBER[gst_n]);
	}
	printf("\n");
	printf("User name :  ");
	for(n = 0;n <= strlen(name);n++){
		printf("%c",name[n]);
	}
	printf("\n");

	d_t();// date and time
	printf("item name\t\t\t\t\t\t\t | quantity\t\t | price\n");
	char item[30] = {"RICE" "BISCUIT" "FRUIT"};
	if(it_sl == 1){
		printf("RICE\t\t\t\t\t\t\t\t | %f      \t   %f\n",quantity,obj1.rice);
		system("color 06");
	}
	else if(it_sl == 2){
		printf("BISCUIT\t\t\t\t\t\t\t\t | %f    \t     %f\n",quantity,obj1.biscuit);
		system("color 06");
	}
	else if(it_sl == 3){
		printf("FRUIT\t\t\t\t\t\t\t\t | %f      \t   %f\n",quantity,obj1.fruit);
		system("color 06");
	}
	float Gr_val;
	float val;
	float n_val;
	switch(it_sl){
		case 1:
			val = quantity * obj1.rice;
			n_val = val * 9 / 100;
			Gr_val = val + n_val;
			break;
		case 2:
			val = quantity * obj1.biscuit;
			n_val = val * 9 / 100;
			Gr_val = val + n_val;
			break;
		case 3:
			val = quantity * obj1.fruit;
			n_val = val * 9 / 100;
			Gr_val = val + n_val;
			break;
	}
	printf("\n\n");
	printf("\t \t\t\t\t\t\t\t\tGST AND TAX INCLUDED \n");
	printf("\n\n");
	printf("\t\t\t\t\t\t\t\t\t    SGST = CGST = %f\n",n_val);
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t    total value = %f\n",val);
	printf("TOTAL : \t\t\t\t\t\t\t\t\t\t %f\n",Gr_val);
	
	int exit_rq;
	printf("\n\n\n");
	printf("1.EXIT\n2.RETURN TO MAIN PAGE\n");
	scanf("%d",&exit_rq);
	if(exit_rq == 1){
		system("cls");
		exit(0);
	}
	else if(exit_rq == 2){
		main();
		system("color 0B");
		system("color 0F");
	}
	else{
		system("color 04");
		printf("invalid Option is selected\n");
	}
	
	
	
	
	
	
	return 0;// main
}//main

int wel(){
	system("color E4");
	printf("\t\t\t\t\t\t\tWELCOME");
	printf("\n\n");
	printf("TIPS :: \n");
	printf("\n");
	printf("1.Space is not allowed between name(user other symbols instead of space )\n");
	printf("\n");
	printf("2.If Any error Occurs please restart the \"invoice machine.exe\"");
	printf("\n");
	printf("\n");
	printf("3.User valid options to prevent errors\n");
	printf("\n");
	printf("4.We Are working on this program\n");
	printf("\n");
	printf("5.Some Features may not work because program is in beta state\n");
	printf("\n\n\n\n");
	int start_rq;
	printf("Do you want to start press 1-9 and to leave press 0\n");
	scanf("%d",&start_rq);
	if(start_rq <= 0){
		exit(0);
	}
	else{
		system("color 07");
		printf("Success");
		system("cls");
	}
}