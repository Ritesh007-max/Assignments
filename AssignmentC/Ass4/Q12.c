#include <stdio.h>

int main() {

    int time;
    scanf("%d", &time);

    int timeH = time / 100;
     int timeM = (time % 100);

    if(timeH < 12) {
        printf("AM");
    }
    else if (timeH >= 12) {
        printf("PM");
    }

    if (timeM == 30) {
        printf("On the Hour");
    }
    else if (timeM > 30)
    {
        printf("Past Half");
    }
    else {
        printf("Before Half");
    }

    
    

	return 0;

}