#include <iostream>
#define SIZE 5
void bsort(int iArray[], int n);
int main()
{
char ch;
char ii;
int iArray[SIZE] ;
for (ii=0; ii<SIZE; ii++)
	{
		std::cout << "Please enter an integer: ";
		std::cin >> iArray[ii];
	}
std::cout << "\n Would you like to sort (Y/N) ";
std::cin >> ch;
if (ch=='Y' || ch=='y')
	{
		bsort(iArray, SIZE);
	}
for (ii=0; ii<SIZE; ii++)
	{
		std::cout << iArray[ii] << " ";
	}
return 0;
}
void bsort(int iArray[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (iArray[j] > iArray[j + 1])
            {
                int tmp = iArray[j];
                iArray[j] = iArray[j + 1];
                iArray[j + 1] = tmp;
            }
        }
    }
}