#include <stdio.h>
#include <stdlib.h>

/*
   Author Guilherme Sartori;
   C solution for the URI 2095 challenge
   The algorith returns the max number of victories of the Great Noglonian Empire(hail the Queen)
   The input is the number of soldiers of both armies and the power level of each soldier
   The battle are decided by duels between single soldiers, the one with a bigger power level wins
   The output is determined by using "qsorting" the Noglonian Army by the power level. Then determining the number of victories using a greedy algorith;
*/

struct soldier {

	long int fightPow;
	int fght;
}typedef soldier;


void Heapify(soldier arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2

    soldier tempSoldier;

    // If left child is larger than root
    if (l < n && arr[l].fightPow > arr[largest].fightPow)
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r].fightPow > arr[largest].fightPow)
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        tempSoldier = arr[i];
        arr[i] = arr[largest];
        arr[largest] = tempSoldier;

        // Recursively heapify the affected sub-tree
        Heapify(arr, n, largest);
    }
}

// main function to do heap sort
void HeapSort(soldier arr[], int n)
{
    soldier tempSoldier;
    int i;
    // Build heap (rearrange array)
    for (i = n / 2 - 1; i >= 0; i--)
        Heapify(arr, n, i);

    // One by one extract an element from heap
    for (i=n-1; i>=0; i--)
    {
        // Move current root to end
        tempSoldier = arr[i];
        arr[i] = arr[0];
        arr[0] = tempSoldier;

        // call max heapify on the reduced heap
        Heapify(arr, i, 0);
    }
}


int compare(const void *a, const void *b) {

	soldier *ia = (soldier *)a;
	soldier *ib = (soldier *)b;

	return ia->fightPow - ib->fightPow;
}


/*void HeapSort(struct soldier *nog, int n) {

	int i;

	for(


}*/



int main() {

	int s;
	int i, j = 0;
	int victories = 0, roundWon = 0;

	scanf("%d", &s);

	soldier quad[s];
	soldier nog[s];

	for(i = 0; i < s; i++) {
		scanf("%ld", &quad[i].fightPow);
		nog[i].fght = 1;
		//printf("%d\n", quad[i]);
	}

	for(i = 0; i < s; i++) {
		scanf("%ld", &nog[i].fightPow);
		nog[i].fght = 0;
		//printf(" %d\n %d\n", nog[i].fightPow, nog[i].fght);
	}

   // HeapSort(quad, s);
	//HeapSort(nog, s);
	//qsort(nog, s, sizeof(struct soldier), int (*compare)(const void* x, const void* y))
    qsort(quad, s, sizeof(soldier), compare);
	qsort(nog, s, sizeof(soldier), compare);


	for(i = 0; i < s; i++) {
		//printf("i = %d\n", i);
		if(nog[(s-1)].fightPow < quad[i].fightPow)
		    break;
		while((roundWon == 0) && (j < s) && nog[j].fght != 1) {
			//printf("j = %d\n", j);
			if(nog[j].fightPow > quad[i].fightPow) {
				victories++;
				roundWon = 1;
				//printf("vic = %d\n", victories);
			}

			j++;
		}

		roundWon = 0;
	}

	printf("%d\n", victories);


	exit(0);
}
