#include<stdio.h>
#include<math.h>

int main (){
	int a, b, c; 
	scanf("%d %d %d", &a, &b, &c); 
	
	int spareBan = ceil(a/4); 
	int sparePintu = ceil(b/2); 
	int spareKaca = ceil(c); 
	int mobil = 0; 
	
	//cari maksimum (cara ribet) 
	/*if(spareBan > sparePintu && spareBan > spareKaca){
		mobil = spareBan; 
	}
	
	if(sparePintu > spareBan && sparePintu > spareKaca){
		mobil = sparePintu; 
	}
	
	if(spareKaca > spareBan && spareKaca > sparePintu){
		mobil = spareKaca; 
	}*/
	
	//cari maksimun simpel 
	mobil = spareBan; 
	if(mobil < sparePintu){
		mobil = sparePintu; 
	}else if (mobil < spareKaca){
		mobil = spareKaca; 
	}
	
	printf("%d %d %d %d\n", mobil, (mobil*4)-a, (mobil*2)-b, (mobil*1)-c); 
	return 0; 
} 
