#include <stdio.h>
int main(void)
{
	int feet, fathoms;

	fathoms = 2;
	feet = fathoms * 6;
	//     ���ұ���fathoms��ֵ
	printf("there are %d feet in %d fathoms !\n", feet, fathoms);
	printf("yes, I said %d feet!\n", feet);
	//                               fathoms * 6
	return 0;
}