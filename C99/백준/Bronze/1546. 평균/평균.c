#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	int arr[1000];
	for (int i = 0; i < a; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (int i = 1; i < a; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	
	double sum = 0;
	for (int i = 0; i < a; i++) {
		sum += (double)arr[i] / max * 100;
	}

	printf("%lf", sum / a);
	return 0;
}