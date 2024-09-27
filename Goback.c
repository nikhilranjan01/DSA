#include <stdio.h>
#include <stdlib.h>
#define MAX_FRAMES 500
void goBackN(int total_frames, int window_size) {
 int i, ack = 0;
 while (ack < total_frames) {
 printf("\nSending frames:\n");
 for (i = 0; i < window_size && (ack + i) < total_frames; i++) {
 printf("Frame %d sent.\n", ack + i);
 }
 int error = rand() % window_size;
 printf("Acknowledgment received for frames up to %d.\n", ack + error);
 ack += error + 1;
 if (error < window_size - 1) {
 printf("Error in frame %d. Resending from frame %d.\n", ack + error, ack);
 }
 }
 printf("\nAll frames have been sent and acknowledged successfully.\n");
}
int main() {
 int total_frames, window_size;
 printf("Enter total number of frames to send: ");
 scanf("%d", &total_frames);
 printf("Enter the window size: ");
 scanf("%d", &window_size);
 goBackN(total_frames, window_size);
 return 0;
}