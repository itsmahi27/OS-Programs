#include <iostream>
#include <unistd.h>

using namespace std;

int main(){
	fork();
	fork();
	fork();

	cout << "Hi\n";

	return 0;
}
