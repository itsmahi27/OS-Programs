#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main(){
	int filePipes[2], dataPro, pid;
	char data[] = "Hello World", buffer[20];

	pipe(filePipes);
	pid = fork();

	if(pid == 0){
		dataPro = write(filePipes[1], data, strlen(data));
		printf("Wrote %d bytes \n", dataPro);
	}else{
		dataPro = read(filePipes[0], buffer, 20);
		printf("Read %d bytes: %s\n", dataPro, buffer);
	}

	return 0;
}
