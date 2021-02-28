/*---------------------------------------------------------------------------------

	Basic template code for starting a DS app

---------------------------------------------------------------------------------*/
#include <nds.h>
#include <stdio.h>
//---------------------------------------------------------------------------------
int main(void) {
	//---------------------------------------------------------------------------------
	consoleDemoInit();
	iprintf("tims stupid button tester \n");
	iprintf("ugh this was a pain to code \n");
	iprintf("i f*** up have fun with this empty space");
	while (1) {
		swiWaitForVBlank();
	}
}