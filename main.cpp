#include <stdio.h>
#include <iostream>

using namespace std;

int countNumbers(int myNum){
	if (myNum == 0){
		return 0;
	}
	else {
		return myNum + countNumbers(myNum-1);
	}
}

int main(int argc, char **argv)
{
	cout << countNumbers(5) << endl;
	return 0;
}
