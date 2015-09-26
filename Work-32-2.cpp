#include<iostream>//Sort
#include<ctime>
using namespace std;


void insertSortUp(int* a, int length);
void insertSortDown(int* a, int length);

typedef void (*p) (int*, int);

p sort[2] = {insertSortUp, insertSortDown};


int main()
{
	
	int A[10] = {0,6,2,3,8,4,9,7,1,5};

	int a = 0, b = 0, c = 0;

cout << "Select function\n";
cout << "1 \t up \n";
cout << "2 \t down \n";

cin >> c;

sort[c-1](A, 10);
	
	return 0;
}

int Up (int a, int b)
{
return a+b;
}
int Down (int a, int b)
{
return a-b;
}
void insertSortUp(int* a, int length)
{
    for (int i = 1; i < length; ++i)
    {
        int value = a[i];
        int j = i - 1;
     
		for ( ;j >= 0 && a[j] > value; --j)
			{
				a[j + 1] = a[j];
			}
        a[j + 1] = value;
    }

	for (int i = 0; i < length; i++)
		cout << a[i];

}

void insertSortDown(int* a, int length)
{
    for (int i = 1; i < length; ++i)
    {
        int value = a[i];
        int j = i - 1;
     
		for ( ;j >= 0 && a[j] > value; --j)
			{
				a[j + 1] = a[j];
			}
        a[j + 1] = value;
    }

	for (int i = length-1; i >= 0; i--)
		cout << a[i];


}