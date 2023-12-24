#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "protocol.h"

int main(void) {
    // Initialize CRC lookup table
    crcInit();

    // Create a pipe for communication between processes
    int pipe_fd[2];
    if (pipe(pipe_fd) == -1) {
        perror("Pipe creation failed");
        exit(EXIT_FAILURE);
    }

    // Fork to create a child process
    pid_t pid = fork();

    if (pid == -1) {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) {
        // Child process (Receiver)

        // Close write end of the pipe since the child is reading
        close(pipe_fd[1]);

        // Allocate memory for msg in the child process
         msg = (msg_fmt *)malloc(sizeof(msg_fmt));

        // Read the message from the pipe
        read(pipe_fd[0], msg, sizeof(msg_fmt));

        // Verify the checksum
         printf("Receiver: calculate_chksum() = %x\n", calculate_chksum());
        //msg->chksum
        if ( msg->chksum == calculate_chksum()) {
            printf("Receiver: Checksum Valid\n");
        } else {
            printf("Receiver: Checksum Invalid\n");
        }

        // Close the read end of the pipe
        close(pipe_fd[0]);
        //free(msg);
    } else {
        // Parent process (Transmitter)

        // Close read end of the pipe since the parent is writing
        close(pipe_fd[0]);

        // Simulated sensor value (replace with actual sensor reading)
        uint8_t sensorValue = 1;

        // Create a message packet using the GET-SET protocol with the INT type
        msg_fields sensor_msg = {SET, INT, sizeof(uint8_t), sensorValue};
        frame_packet(&sensor_msg);

        // For testing purposes, printing the checksum
        printf("Transmitter: msg->chksum = %x\n", msg->chksum);

        // Write the message to the pipe
        write(pipe_fd[1], msg, sizeof(msg_fmt));

        // Close the write end of the pipe
        close(pipe_fd[1]);

        // Wait for the child process to finish
       // wait(NULL);
    }

    return 0;
}




















