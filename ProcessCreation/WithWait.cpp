#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main(){
	int childProcessCreated = fork();

	if(childProcessCreated == 0){

		cout << "This is the child process: " << childProcessCreated << "\n";

	}else if(childProcessCreated > 0){

		wait(NULL);
		cout << "This is the parent process: " << childProcessCreated << "\n";

	}

	int parentProcessId = getppid();
	int processId = getpid();

	cout << "Process Id: " << processId << "\n";
	cout << "Parent Process Id: " << parentProcessId << "\n";
	cout << "\n";

	return 0;
}
