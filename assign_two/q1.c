//decending full stack
#include<stdio.h>
#include<conio.h>
	#define N 5
	int stack[N];
	int sp= N;

void push(){
	int x;
	printf("Enter Data to push: ");
	scanf("%d",&x);
	
	if(sp==0){
		printf("Overflow\n");
	}
	else{
		sp=sp-1;
		stack[sp]=x;
	}
	
}

void pop(){
	
	int item ;
	
	if(sp==N){
		printf("Underflow\n");
	}
	else{
		item=stack[sp];
		sp=sp+1;
		printf("Poped item is: %d\n",item);
	}

}

void display(){
	int i;
	for(i=sp;i<=N-1;i++){
		printf("%d ",stack[i]);
	}
	printf("\n");
	printf("Position of SP: %d \n",sp);
}

void main(){
	int ch;
	//clrscr();
	do{
	
	printf("Enter choice: 1 for PUSH , 2 for POP , 3 for DISPLAY , 0 for exit :");
	scanf("%d",&ch);
	switch(ch){
		case 1: push();
				break;
		case 2: pop();
				break;
		case 3: display();
				break;
		case 0: printf("Good Bye...");
				break;
		default: printf("Invalid Choice");
	          } 
	}while(ch!=0);
		getch();
	
	
}
