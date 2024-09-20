#include <stdio.h>
#include <stdlib.h>

#define BUCKET_SIZE 30
#define OUTGOING_RATE 3

int main() {
    int incoming, bucket_content = 0, n, i;

    printf("Enter the number of packets: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter the number of incoming packets at time %d: ", i + 1);
        scanf("%d", &incoming);

        if(incoming + bucket_content > BUCKET_SIZE) {
            int dropped = (incoming + bucket_content) - BUCKET_SIZE;
            printf("Bucket overflow! Dropping %d packets.\n", dropped);
            bucket_content = BUCKET_SIZE;
        } else {
            bucket_content += incoming;
        }
        printf("Packets in bucket: %d\n", bucket_content);
        bucket_content -= OUTGOING_RATE;
        if(bucket_content < 0) {
            bucket_content = 0;
        }
        printf("After sending %d packets, remaining in bucket: %d\n", OUTGOING_RATE, bucket_content);
    }
    while(bucket_content > 0) {
        printf("After sending %d packets, remaining in bucket: %d\n", OUTGOING_RATE, bucket_content);
        bucket_content -= OUTGOING_RATE;
        if(bucket_content < 0) {
            bucket_content = 0;
        }
    }
    printf("Bucket is now empty.\n");
    return 0;
}
