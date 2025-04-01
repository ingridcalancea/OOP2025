#include "NumberList.h"

using namespace std;

int main()
{
	NumberList NList;

	NList.Init();

	int v[] = { 1, 2, 3, 6, 4, 9, 7, 2, 4, 5, 0 };
	int i;

	for (i = 0; i < 10; i++) 
	{
		if (NList.Add( v[i] ))
		{
			printf("%d ", v[i]);
		}
	}

	printf("\n");

	NList.Sort();
	NList.Print();

	return 0; 
}
