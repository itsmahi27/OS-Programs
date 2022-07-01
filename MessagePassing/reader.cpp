#include <iostream>
#include <sys/msg.h>

using namespace std;

struct messageBuffer{
	long type;
	char message[100];
} messageBuf;

int main(){
	key_t key = ftok("progfile", 65);
	int msgid = msgget(key, 0666 | IPC_CREAT);

	msgrcv(msgid, &messageBuf, sizeof(messageBuf), 1, 0);

	printf("Data received is: %s\n", messageBuf.message);

	msgctl(msgid, IPC_RMID, NULL);

	return 0;
}
