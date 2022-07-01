#include <iostream>
#include <sys/msg.h>

#define MAX 100

using namespace std;

struct messageBuffer{
	long type;
	char message[100];
} messageBuf;

int main(){
	key_t key = ftok("progfile", 65);
	int msgid = msgget(key, 0666 | IPC_CREAT);

	messageBuf.type = 1;
	fgets(messageBuf.message, MAX, stdin);

	msgsnd(msgid, &messageBuf, sizeof(messageBuf), 0);
	cout << "Data send is: " << messageBuf.message << "\n";

	return 0;
}
