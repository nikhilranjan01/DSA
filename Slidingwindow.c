#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void sliding_window_protocol(int total_frames, int window_size) {
 int sent = 0; 
 while (sent < total_frames) {
 printf("\nSending frames: ");
 for (int i = 0; i < window_size && (sent + i) < total_frames; i++) {
 printf("%d ", sent + i);
 }
 printf("\n");
 printf("Acknowledgments received for frames: ");
 for (int i = 0; i < window_size && (sent + i) < total_frames; i++) {
 printf("%d ", sent + i);
 }
 printf("\n");
 sent += window_size;
 }
 printf("\nAll frames have been sent and acknowledged.\n");
}
int main() {
 int total_frames, window_size;
 printf("Enter the total number of frames: ");
 scanf("%d", &total_frames);
 printf("Enter the window size: ");
 scanf("%d", &window_size);
 sliding_window_protocol(total_frames, window_size);
 return 0;
}
