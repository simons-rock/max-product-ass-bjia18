#include "max_product.h"

int max_pairwise_product_fast(int *arr, int size){
	int a=0,b=1;
	for (int i=0;i<size;i++){
		if (arr[i]>arr[a]){
			b=a;
			a=i;
		} else if ((i!=a)&&((arr[i]==arr[a] && i!=a) || (arr[i]>arr[b] && a!=b)))
			b=i;
	}
	return arr[a]*arr[b];
}

