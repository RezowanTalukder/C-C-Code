#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 10 

struct catalog{
	   char name[30];
	   char title[40];
	   char pub[50];
	   unsigned date;
	   unsigned char ed ;
}cat[max] ;
int top =0 ;

int main()
{
	int choice ;
	load() ;
	do{
		choice=menu();
		switch(choice){
			case 1:enter();
			break;
			case 2:author_search();
			break ;
			case 3:title_search();
			break ;
			case 4:save();
		}
	}
	while(choice!=5) ;
	
	
	return 0 ;
}

menu(void){
	int i ;
	char str[80];
	printf(" 1. enter\n");
	printf(" 2.scarch by author\n");
	printf(" 3.search by title\n");
	printf(" 4.save cataloge\n");
	printf(" 5.quit\n");
	do{
		printf("choose your selection:");
		gets(str);
		i=atoi(str);
		printf("\n");		
	}
while(i<1||i>5);
return i ;
}

void enter()
{
	int i ;
	char temp[80] ;
	for(i=top ;i<max ;i++){
		printf("enter author name(ENTER to quit):");
		gets(cat[i].name) ;
		if(!*cat[i].name)break ;
		printf("enter title name:");
		gets(cat[i].title);
		printf("enter publisher:");
		gets(cat[i].pub);
		printf("enter copyright date:");
		gets(temp);
		cat[i].date=(unsigned)atoi(temp);
		printf("enter edition:");
		gets(temp);
		cat[i].ed=(unsigned)atoi(temp) ;		
	}
	top=1 ;
	
}

void author_search(void){
	int found,i ;
	char temp[59] ;
	printf("author:");
	gets(temp);
	found=0 ;
	for(i=0 ;i<top;i++){
	
	if(!strcmp(temp,cat[i].author)){
		display(i);
		found=1 ;
		printf("\n");
	}
	if(!found){
		printf("not found");
	}
}
}

