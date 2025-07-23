#include <stdio.h>
#include <string.h>

int main(){
	int n ;
	int quantity ;
	float price , total = 0 ;
	char item[20];
	
	printf("Available items and their prices:\n");
	printf("Dal - Rs. 200 per kg\n");
	printf("Shampoo - Rs. 450 per bottle\n");
	printf("Chips - Rs. 40 per packet\n");
	printf("Cream - Rs. 300 per tube\n");
	printf("Oil - Rs. 500 per bottle\n");
	printf("Flour - Rs. 50 per kg\n\n");
	
	printf("Enter the number of different items u are purchasing: ");
	scanf("%d",&n);
	
	for(int j = 0 ; j < n ; j++){
		
		printf("\n Item %d:\n" , j+1);
		printf("Enter Item name: ");
		scanf("%s",item);
		printf("Enter quantity: ");
		scanf("%d",&quantity);
		
		if(strcmp(item , "Dal") == 0){
			price = 200 * quantity;
		}
		else if(strcmp(item , "Shampoo") == 0 ){
			price = 450 * quantity;
		}
		else if(strcmp(item , "Chips") == 0 ){
			price = 40 * quantity;
	    }
	    else if(strcmp(item , "Cream") == 0 ){
			price = 300 * quantity;
	    }
	    else if(strcmp(item , "Oil") == 0 ){
			price = 500 * quantity;
        }
        else if(strcmp(item , "Flour") == 0 ){
			price = 50 * quantity;
		}
		else{
			printf("The item  %s is not in grocery store .\n: ",item);
			continue;
		}
		
		if(price > 500){
			float discount = price * 0.10 ;
			printf("Discount applied on this item: Rs. %.2f\n",discount);
			price -= discount;
		}
		total += price ;
		printf("Item: %s , Quantity: %d, Price: Rs. %.2f\n", item , quantity , price);
	}
	printf("Total bill amount: Rs .%2f\n",total);
	
	
	return 0 ;
}
