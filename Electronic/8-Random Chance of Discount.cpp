/*
	Ask the user for a number `price`, then in this case user have 80% chance to get discount `price` 5%, code the solution.
	Don't forget to display the `original price`, `discount value`, and `discounted price`.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int price; 
	scanf("%d", &price);
	getchar(); 
	
	printf("Original Price: %d\n", price);  
	
	srand(time(0)); 
	int randomDiscount = rand() %101; 
	printf("%Discount value: %d\n", randomDiscount); 

	if(randomDiscount <=80){
		price*=0.95; 
	} 
		printf("price: %d\n", price);  
	
	return 0;
}

/*user masukan harga, dari harga di pilih discount random jika di bahwa atau sama dengan 80% 
maka akan mendapatkan discount sebesar 5% jika lebih besar angkanya maka tidak mendapatkan diskon. 
cara hitung disc harga dikalikan dengan discountnya lalu dikurangi dengan harga aslinya.*/
