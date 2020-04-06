#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc > 1) {
		printf("sudo or sudonot. there is no sutry.\n");
	} else {
		printf("sutry - execute a command as another user.\n\n\nusage: `sutry [command]`\n");
	}
	return 0;
}
