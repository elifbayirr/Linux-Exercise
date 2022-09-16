#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int main() {

	int my_editor;
	
	while(1){
	
		system("ps aux");    // dumps all running processes to the screnn as a complete list.
		
		if (my_editor==system("pidof gedit"))   // if my editor equal gedit's pid kill it
		{
		system("kill -9 $(pidof gedit)");    // kill gedit
		break;
		}
			  
	}
	return 0;
}
