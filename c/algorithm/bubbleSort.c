#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int array[8] = {3,5,6,1,8,4,2,9};
	int i,j,k,temp;
	
	for(i = 0; i < sizeof(array)/sizeof(array[0]) - 1;i++){
			
		for(j = 0; j < sizeof(array)/sizeof(array[0]) - 1;j++ ){
			
			if(array[j] > array[j+1]){
				
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				
			}	
					
		}
	}
	
	for(k = 0; k<sizeof(array)/sizeof(array[0]) - 1;k++){
		
		printf("%d\n",array[k]);
		
	}
	return 0;
}
