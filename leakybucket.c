#include <stdio.h>
int main() {
    int bucket_size, output_rate, input_packets[10], n, i, remaining = 0;
    printf("Enter the bucket size: ");
    scanf("%d", &bucket_size);
    printf("Enter the output rate: ");
    scanf("%d", &output_rate);
    printf("Enter the number of packets to send: ");
    scanf("%d", &n);
    printf("Enter the size of each packet:\n");
    for (i = 0; i < n; i++) {
        printf("Packet %d: ", i + 1);
        scanf("%d", &input_packets[i]);
    }
    for (i = 0; i < n; i++) {
        if (input_packets[i] + remaining > bucket_size) {
            printf("Packet %d of size %d is dropped (bucket overflow)\n", i + 1, input_packets[i]);
        } else {
            remaining += input_packets[i];
            printf("Packet %d of size %d is added to the bucket\n", i + 1, input_packets[i]);
        }
        if (remaining > 0) {
            if (remaining <= output_rate) {
                printf("Transmitting %d packets\n", remaining);
                remaining = 0;
            } else {
                printf("Transmitting %d packets\n", output_rate);
                remaining -= output_rate;
            }
        }
        printf("Packets remaining in bucket: %d\n", remaining);
    }
    while (remaining > 0) {
        if (remaining <= output_rate) {
            printf("Transmitting remaining %d packets\n", remaining);
            remaining = 0;
        } else {
            printf("Transmitting %d packets\n", output_rate);
            remaining -= output_rate;
        }
        printf("Packets remaining in bucket: %d\n", remaining);
    }

    return 0;
}
