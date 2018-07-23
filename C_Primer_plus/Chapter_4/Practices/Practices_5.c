#include <stdio.h>

int main(int argc, char const *argv[])
{
	float download_speed;
	float file_size;
	float download_time;

	printf("Plz enter your download speed:\n");
	scanf("%f", &download_speed);
	printf("Then enter your fiel size:\n");
	scanf("%f", &file_size);
	download_time = file_size / (download_speed / 8);
	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds\n", download_speed, file_size, download_time);

	return 0;
}