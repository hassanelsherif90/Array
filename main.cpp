#include <iostream>
#include <string>

using namespace std;

void FillArray(int arr[100], int& arrlength){
    arrlength = 6;
    arr[0] = 5;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 10;
	arr[4] = 10;
	arr[5] = 0;
}

void PrintArray(int arr[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool checkArrayPalindrome (int arr[100], int arrlength)
{
    for (int i = 0 ; i < arrlength ; i++)
        {
            if (arr[i] != arr[arrlength -i - 1])
                {
                    return false;
                }
        }

    return true;
}



int main()
{
    int SourceArray[100], Arrlength= 0;
    FillArray(SourceArray,Arrlength );
    PrintArray(SourceArray, Arrlength);
    if (checkArrayPalindrome(SourceArray, Arrlength))
    {
        cout << "\nYes Array Is a Palindrome \n";
    }
    else
    {
        cout << "\nYes Array Is No a Palindrome \n";
    }
    return 0;
}
