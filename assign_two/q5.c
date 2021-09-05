//simple queue
#include<stdio.h>
#include<conio.h>
	#define N 5
	int queue[N];
	int first=-1;
	int last=-1;

void push(){
	int x;
	printf("Enter Data to push: ");
	scanf("%d",&x);
	
	if(last==(N-1)){
		printf("Overflow\n");
	}
	else if(first==-1 && last==-1){
		first=0;
		last=0;
		queue[last]=x;
	}
	else{
		last=last+1;
		queue[last]=x;
	}
	
}

void pop(){
	
	int item ;
	
	if(first==-1 && last==-1){
		printf("Nothing to delete\n");
	}
	else if(first==last){
		item=queue[first];
		first=-1;
		last=-1;
		printf("Poped item is: %d\n",item);
	}
	else{
		item=queue[first];
		first=first+1;
		printf("Poped item is: %d\n",item);
	}

}

void display(){
	
	if(first==-1 && last==-1){
		printf("Empty Queue\n");
	}
	else{
	
	int i;
	for(i=first;i<last+1;i++){
		printf("%d ",queue[i]);
	}
	printf("\n");
}
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
