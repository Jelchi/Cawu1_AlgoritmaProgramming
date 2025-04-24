// merge sort 
/*#include <stdio.h>

void merge (int arr[], int l, int m, int r) {
 int n1 =  m - l+ 1;//Size 1 ( karena mid - indexs 0 harus di tambah 1 agar bisa dapat mid nya
 int n2 =  r - m; // Size 2 tinggal langsung index terakhir di kurangin mid pasti sama
 
 
 // buat array a dan b 
 int a[n1];
 int b[n2];
 
 // isi arr a dan b
 for(int i = 0; i < n1 ;i++) {
  a[i] = arr[l+i];
 }
 for(int j = 0; j < n2;j++) {
  b[j] = arr[m+j+1];
 }
 
 
 //awal index nya
 int i = 0, j = 0, k = l;
 
 
 // perbandingan
 while (i < n1 && j < n2) {
  if(a[i] <=  b[j] ) {
   arr[k] = a[i];
   i++;
  }else {
   arr[k] = b[j];
   j++;
  }
  k++;
 }
 
 // ketika arr b sudah habis (j sudah lewat n2)
 while (i < n1) {
  arr[k] = a[i];
  i++;
  k++;
 }
 
 // ketika arr a sudah habis (i sudah lewat n1)
 while (j < n2) {
  arr[k] = b[j];
  j++;
  k++;
 }
}

void mergeSort (int arr[],int l,int r) {
 if (l < r) {
  int m = l + (r - l ) / 2;
  
  mergeSort (arr, l, m);
  mergeSort (arr, m+1, r);
  
  merge(arr, l , m , r );
 }

// // ketika arr b sudah habis (j sudah lewat n2)
// while (i < n1) {
//  arr[k] = a[i];
//  i++;
//  k++;
// }
// 
// // ketika arr a sudah habis (i sudah lewat n1)
// while (j < n2) {
//  arr[k] = b[j];
//  j++;
//  k++;
// }

}

void printAll (int arr[], int size) {
 for(int i = 0; i < size;i++) {
  printf("%d ", arr[i]);
 }
 printf("\n");
}

int main () {
 
 int arr[] = {6,5,9,8,7,1};
 int size = sizeof(arr) / sizeof(arr[0]);
 
 printf("Before Sort: \n");
 printAll(arr,size);
 
 printf("After Sort\n");
 mergeSort(arr, 0, size -1);
 printAll(arr,size);
 
 return 0;
}
*/
#include <stdio.h>

void swap (int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition (int arr[], int l, int r) {
	int pivot = arr[r];
	
	int i = l-1 ;
	
	for(int j = l; j < r;j++) {
		//kalau arr j lebih kecil dari pivot
		// i maju dan tuker arr[i] dengan arr[j]
		if(arr[j] <= pivot) {
			i++;
			
			swap(&arr[i], &arr[j]);
		}
	}
	//tukar arr[i+1] dengan pivot
	swap(&arr[i+1],&arr[r]);
	
	return (i+1);
}

void quicksort (int arr[],int l , int r) {
	if(l < r) {
		int pivotindex = partition(arr,l, r);
		
		quicksort(arr,l,pivotindex-1);
		quicksort(arr,pivotindex+1,r);
	}
}

void printAll (int arr[], int size) {
	for(int i = 0; i < size;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main () {
	int arr[] = {1,0,7,6,9,2};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	printf("Before Sort: \n");
	printAll(arr,size);
	
	printf("After Sort: \n");
	quicksort(arr, 0, size -1);
	printAll(arr,size);
	
}
