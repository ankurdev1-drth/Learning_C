#include <stdio.h>
struct	time{
	int hours;
	int minutes;
	int seconds;
};


struct time split_time(long total_seconds){	
		struct time t;
		long remaining;
	
		t.hours = total_seconds / 3600;
	 	remaining = total_seconds % 3600;
		t.minutes = remaining / 60;
		t.seconds = remaining % 60;
		
	return t;
}

int main(void){
	long sec;
	struct time t;
	
	printf("Enter the total_seconds: ");
	scanf("%d", &sec);
	t = split_time(sec);
	printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
	return 0;
}
