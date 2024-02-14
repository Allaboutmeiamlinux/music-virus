#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void playAudioLinux(const char *filePath) {
    char command[256];
    snprintf(command, sizeof(command), "xdg-open %s", filePath);
    system(command);
}

int main() {
    for(;;){
    playAudioLinux("Error.mp3");
    sleep(1);
    }
    return 0;
}
