#include <stdio.h>
#include <stdint.h>

int main(void) {
    int packet_id;
    uint8_t status;
    float voltage;
    uint16_t checksum;

    unsigned int status_input;

    scanf("%x %o %f", &packet_id, &status_input, &voltage);

    status = (uint8_t)status_input;
    checksum = (uint16_t)(packet_id + status);

    printf("PACKET_ID: %d\n", packet_id);
    printf("STATUS_CODE: %u\n", status);
    printf("STATUS_CHAR: %c\n", status);
    printf("VOLTAGE: %.2f\n", voltage);
    printf("CHECKSUM: %u\n", checksum);

    return 0;
}