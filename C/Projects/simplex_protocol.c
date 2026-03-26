#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // for sleep()

// Function to simulate sending a frame
int send_frame(int frame, int noisy) {
    if (!noisy) {
        printf("Sender: Frame %d sent successfully.\n", frame);
        return 1; // Frame sent successfully
    } else {
        int chance = rand() % 10; // 0-9
        if (chance < 7) {
            printf("Sender: Frame %d sent successfully.\n", frame);
            return 1;
        } else {
            printf("Sender: Frame %d lost during transmission!\n", frame);
            return 0;
        }
    }
}

// Function to simulate receiving an ACK
int receive_ack(int frame, int noisy) {
    if (!noisy) {
        printf("Receiver: ACK %d received successfully.\n", frame);
        return 1;
    } else {
        int chance = rand() % 10; // 0-9
        if (chance < 7) {
            printf("Receiver: ACK %d received successfully.\n", frame);
            return 1;
        } else {
            printf("Receiver: ACK %d lost!\n", frame);
            return 0;
        }
    }
}

int main() {
    int total_frames, mode;
    
    srand(time(NULL)); // Seed random number generator

    printf("Stop-and-Wait Protocol Simulation\n");
    printf("1. Unrestricted (Noiseless) Channel\n");
    printf("2. Noisy Channel\n");
    printf("Choose mode (1 or 2): ");
    scanf("%d", &mode);

    int noisy = (mode == 2);

    printf("Enter number of frames to send: ");
    scanf("%d", &total_frames);

    int frame = 0;

    while (frame < total_frames) {
        printf("\n=== Sending Frame %d ===\n", frame);

        if (send_frame(frame, noisy)) {
            sleep(1); // Simulate delay
            if (receive_ack(frame, noisy)) {
                frame++; // Proceed to next frame
            } else {
                printf("Sender: Timeout! Resending frame %d...\n", frame);
            }
        } else {
            printf("Sender: Timeout! Resending frame %d...\n", frame);
        }

        sleep(1); // Delay before next attempt/frame
    }

    printf("\nAll frames sent successfully!\n");
    return 0;
}
