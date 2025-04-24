#include <stdio.h> 

//8 move type 
int UP_UP_RIGHT	=1;
int UP_UP_LEFT =2; 
int LEFT_LEFT_UP =3;
int LEFT_LEFT_DOWN =4; 
int DOWN_DOWN_LEFT = 5;
int DOWN_DOWN_RIGHT = 6; 
int RIGHT_RIGHT_DOWN = 7; 
int RIGHT_RIGHT_UP = 8;

bool validate(int currPos){
	// return currPos<=88 && currPos >=11 && currPos % 10 != 0 && currPos % 10 != 9; 
	if(currPos<=88 && currPos >=11 && currPos % 10 != 0 && currPos % 10 != 9){
		return true;  
	}else{
		return false; 
	}
}

int moveKuda(int currPos, int moveType){
	int newPos = currPos; 
	
	switch(moveType){
		case 1:
			newPos =currPos -20 +1; 
			break; 

		case 2:
			newPos =currPos -20 -1; 
			break; 
		case 3:
			newPos =currPos -10 -2; 
			break; 

		case 4:
			newPos =currPos +10 -2; 
			break; 
		case 5:
			newPos =currPos +20 -1; 
			break; 

		case 6: 
			newPos =currPos +20 +1; 
			break; 

		case 7:
			newPos =currPos +10 +2; 
			break; 

		case 8:
			newPos =currPos -10 +2; 
			break; 

		default: 
		return -1; 
	}

	bool result = validate(newPos); 
	if(result == true){
		return newPos; 
	} else{
		return -1; 
	}

}

bool recurse(int bPos, int wPos, int limit, int turn, bool whiteIsMoving){
	//move inValid 
	if(bPos == -1 || wPos == -1){
		return false ; 
	}
	
	//baseCase /Goal 
	if(bPos == wPos){
		return true; 
	}
	
	//base Case /Limit 
	if(turn > limit ){
		return false; 
	}

	//recurse
	if(whiteIsMoving == true){
		if(recurse(bPos, moveKuda(wPos, UP_UP_RIGHT)		, limit, turn , false)) return true; 
		if(recurse(bPos, moveKuda(wPos, UP_UP_LEFT)			, limit, turn , false)) return true; 
		if(recurse(bPos, moveKuda(wPos, LEFT_LEFT_UP)		, limit, turn , false)) return true; 
		if(recurse(bPos, moveKuda(wPos, LEFT_LEFT_DOWN)		, limit, turn , false)) return true; 
		if(recurse(bPos, moveKuda(wPos, DOWN_DOWN_LEFT)		, limit, turn , false)) return true; 
		if(recurse(bPos, moveKuda(wPos, DOWN_DOWN_RIGHT)	, limit, turn , false)) return true; 
		if(recurse(bPos, moveKuda(wPos, RIGHT_RIGHT_DOWN)	, limit, turn , false)) return true; 
		if(recurse(bPos, moveKuda(wPos, RIGHT_RIGHT_UP)		, limit, turn , false)) return true; 		
	} else{
		if(recurse(moveKuda(bPos, UP_UP_RIGHT)		, wPos, limit, turn+1 , true)) return true; 
		if(recurse(moveKuda(bPos, UP_UP_LEFT)		, wPos, limit, turn+1 , true)) return true; 
		if(recurse(moveKuda(bPos, LEFT_LEFT_UP)		, wPos, limit, turn+1 , true)) return true; 
		if(recurse(moveKuda(bPos, LEFT_LEFT_DOWN)	, wPos, limit, turn+1 , true)) return true; 
		if(recurse(moveKuda(bPos, DOWN_DOWN_LEFT)	, wPos, limit, turn+1 , true)) return true; 
		if(recurse(moveKuda(bPos, DOWN_DOWN_RIGHT)	, wPos, limit, turn+1 , true)) return true; 
		if(recurse(moveKuda(bPos, RIGHT_RIGHT_DOWN)	, wPos, limit, turn+1 , true)) return true; 
		if(recurse(moveKuda(bPos, RIGHT_RIGHT_UP)	, wPos, limit, turn+1 , true)) return true; 
	}
	return false; 
}

int main(){
	int t; 

	scanf("%d", &t); 
	getchar(); 

	for(int i=0; i<t; i++){
		int n; 
		char bH, wH; 
		int bV, wV; 

		scanf("%d", &n); 
		getchar(); 

		scanf("%c%d %c %d", &bH, &bV, &wH, &wV); 
		getchar(); 

		int bHN = bH -'A' +1; 
		int wHN = wH - 'A' +1; 

		int bPos = bHN *10 +bV; 
		int wPos = wHN *10 +wV; 


		printf("Case %d : %s\n", i+1, recurse(bPos, wPos, n, 1, true) == true ? "YES" : "NO"); 
	}
	return 0; 
}