#include <iostream>
#include <sys/shm.h>

using namespace std;

int main(){
	key_t key = ftok("shmfile", 65);
	int shmid = shmget(key, 1024, 0666 | IPC_CREAT);

	char *str = (char *) shmat(shmid, (void *) 0, 0);

	cout << "Write data: \n";
	scanf("%s", str);

	cout << "Data written to memory: " << str << "\n";

	shmdt(str);

	return 0;
}

