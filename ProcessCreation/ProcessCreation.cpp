#include <iostream>
#include <unistd.h>

using namespace std;

int main(){
	int childProcessCreated = fork();

	int processId = getpid();
	int parentProcessId = getppid();

	if(childProcessCreated == 0){

		cout << "This is the child process " << childProcessCreated << "\n";

	}else if(childProcessCreated > 0){

		cout << "This is the parent process " << childProcessCreated << "\n";

	}


	cout << "Process Id: " << processId << "\n";
	cout << "Parent Process Id: " << parentProcessId << "\n";

	return 0;
}
