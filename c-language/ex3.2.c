#include <stdio.h>
#include <stdlib.h>

int main() {
	
	for (int i = 0; i <= 50; i++) {
		
		if (i % 2 == 0) {
			
			printf("%d ", i);	
		}
		
	}
	
	//outra forma
	/*for (int i = 0; i <= 50; i += 2) {
		
		printf("%d ", i);	

	}*/
	
	//outra forma
	/*for (int i = 0; i <= 25; i++) {
		
		printf("%d ", i*2);	

	}*/
	
	return 0;
	
}
