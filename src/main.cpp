#include <cstdio>
#include <cstdlib>

int main()
{
	if (int* pointerToHeap = (int*)malloc(sizeof(int)))
	{
		*pointerToHeap = 12;
		printf("%d", *pointerToHeap);
		free(pointerToHeap);
	}

	int* arrayOfFive = (int*)malloc(5 * sizeof(int));
	printf("Allocated at: %p", arrayOfFive);
	arrayOfFive[0] = 1;
	arrayOfFive[1] = 2;
	//arrayOfFive[5] = 213;	// DANGEROUS! INVALID! (OUT OF BOUNDS)
	free(arrayOfFive);
}
