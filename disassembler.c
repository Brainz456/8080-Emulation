#include <stdio.h>


int disassemble(unsigned char *codeBuffer, int pc){
    unsigned char *opcode = &codeBuffer[pc];
    int opbytes = 1;
    printf("%04x",pc); //Print four hex bytes
    switch(*opcode){
        case 0x00: printf("NOP"); break;
        case 0x01: printf("LXI    B,#$%02x%02x",opcode[2],opcode[1]); opbytes=3;break;
        case 0x02: printf("STAX   B"); break;    
        case 0x03: printf("INX    B"); break;    
        case 0x04: printf("INR    B"); break;    
        case 0x05: printf("DCR    B"); break;   

    }


    printf("\n");
    return opbytes;
}

int main(void){
    /*
     * The main logic loop:
     *  - Bring in the entire program into a buffer
     *  - While the offset is lower than the length of the buffer:
     *      - Pass the buffer into disassemble and the offset (how many codes have been processed)
     *      - Work out the code, print it.
     *      - Return how many bytes were read and add it to the offset
     *  - When finished, print how many bytes were read total.
    */
}