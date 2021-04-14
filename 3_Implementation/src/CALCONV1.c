#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include "testcal.h"


//#define STYLE_BOLD         "\033[1m"

struct calculator{                                //STRUCTURE FOR CALCULATOR
	int x1,x2;
	int sum;
	int product;
	int subtract;
	int divide;
	int answer;
	int ch1;
};
struct converter{                                 //STRUCTURE FOR CONVERTER
	int ch2;
	int cm;
	float inch;
	float feet;
	float answer2;
	float answer1;
	long int bytes;
	char a;
	
	
};
void calc(struct calculator c1);               //FUNCTIONS FOR CALCULATOR
                                               // AND CONVERTER
void conv(struct converter v1);

int main()

{ struct calculator c;                          //MAIN PROGRAM
  struct converter v;
  //textbackground(BLUE);
  int input;
  c.answer=0;
  system("COLOR B0");
  
  printf("                                 WELCOME TO CALCONV- A CALCULATOR WITH A CONVERTER\n\n");
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED);
 
  {
  printf("ENTER 1 FOR CALCULATOR AND 2 FOR CONVERTER\n");
}
  scanf("%d",&input);
  if(input==1)
  { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY);
    printf("YOU HAVE ENTERED CALCULATOR...\n");
    printf("ENTER CHOICE FROM 1/2/3/4/5\n\n");
    printf("1. CHOOSE 1 FOR ADDITION OF TWO NUMBERS\n\n");
    printf("2. CHOOSE 2 FOR SUBTRACTION OF TWO NUMBERS\n\n");
    printf("3. CHOOSE 3 FOR MULTIPLICATION OF TWO NUMBERS\n\n");
    printf("4. CHOOSE 4 FOR DIVISION OF TWO NUMBERS\n\n");
    scanf("%d",&c.ch1);
    
  	switch(c.ch1)
  	{
  		case 1: printf("ADD\n");
  		
  		        printf("ENTER TWO NUMBERS\n");
                scanf("%d %d", &c.x1,&c.x2);
  		        c.answer=c.x1+c.x2;
  		        
  		       break;
  		       
  		case 2: printf("SUBTRACT\n");
		        printf("ENTER TWO NUMBERS\n");
                scanf("%d %d", &c.x1,&c.x2);
				c.answer=c.x1-c.x2;
				
  		        break;
  		       
  		case 3: printf("MULTIPLY\n");
				printf("ENTER TWO NUMBERS\n");
                scanf("%d %d", &c.x1,&c.x2);
	            c.answer=c.x1*c.x2;
	            
  		        break;
  		       
  		case 4: printf("DIVIDE\n");
				printf("ENTER TWO NUMBERS\n");
                scanf("%d %d", &c.x1,&c.x2);
	            c.answer=c.x1/c.x2;
  		        break;
  		        
  		        
  		default: printf("WRONG INPUT\n");
  		
  		                exit(1);
	  }
	  calc(c);
  }
  else
  if(input==2){
  	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY);
  	
  	printf(" YOU HAVE ENTERED CONVERTER\n");
  	printf("ENTER CHOICE FROM 1/2/3\n\n");
  	printf("1. CHOOSE 1 FOR METRIC CONVERSION\n\n");
  	printf("2.CHOOSE 2 FOR BYTE CONVERSION\n\n ");
  	printf("3.CHOOSE 3 FOR ELECTRONIC CONVERSION\n\n");
  	scanf("%d",&v.ch2);
  	switch(v.ch2)
  	{
  		case 1:
  			
  			
  			printf("METRIC CONVERTER");
  			printf("ENTER VALUE IN CENTIMETER\n");
  			scanf("%d",&v.cm);
  			v.answer2=v.cm*0.3987;
  			v.answer1=v.answer2*0.08;
  			
  			break;
  			
  		case 2: 
  		
  		
		    printf("BYTE CONVERTER");
		    printf("ENTER VALUE IN KILOBYTE\n");
		    scanf("%d",&v.cm);
		    v.answer1=v.cm*1024;
		    v.answer2=v.cm*8192;
		    
		    break;
		        
		case 3: 
		
		    printf("ELECTRONIC CONVERTER ");
		    printf("ENTER VALUE OF CURRENT\n");		          
		    scanf("%d",&v.cm);
		    printf("ENTER VALUE OF RESISTANCE\n");
		    scanf("%d",&v.a);		          
		    printf("VALUES OF VOLTAGE AND POWER ARE......\n");
		    v.answer2=v.cm*v.a;
		    v.answer1=v.answer2*v.a;
		        
		    break;
		        
		        	          
		         		          
		  
		default:
		
		    printf("WRONG INPUT\n");
		
		    exit(1);
  		
  		
	  }
	    conv(v);
  }
 
	
	   return 0;
}

void calc(struct calculator c1)
{   

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN);   //CALCULATOR OUTPUT


	printf("REQUIRED ANSWER IS = %d\n",c1.answer);
}

void conv(struct converter v1)
{  
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_GREEN);    //CONVERTER OUTPUT
    

printf(" REQUIRED ANSWER IS %.2f %.2f",v1.answer2 ,v1.answer1);

}
