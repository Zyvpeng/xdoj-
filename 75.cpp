#include <stdio.h>

int main() {
	int m, n;
	int i, j;
	int z, h = 1;
	int p = 1;
	scanf("%d %d", &m, &n);
	int a[m][n];
	int b[10000];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	b[0] = a[0][0];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			for (z = 0; z < p; z++) {
				if (b[z] == a[i][j]) {
					h = 0;
				}
			}
			if (h == 1) {
				b[p] = a[i][j];
				p++;
			}
			h = 1;
		}
	}
	int t;
	for (i = 0; i < p - 2; i++) {
		for (j = i + 1; j < p - 1 ; j++) {
			if (b[j] < b[i]) {
				t = b[j];
				b[j] = b[i];
				b[i] = t;
			}
		}
	}
	int count = 0;
	for (z = 0; z < p; z++) {
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				if (b[z] == a[i][j]) {
					count++;
				}
			}
		}
		printf("%d %d\n", b[z], count);
		count = 0;
	}
	return 0;
}
