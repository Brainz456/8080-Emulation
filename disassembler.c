#include <stdio.h>
#include <stdlib.h>

int disassemble(unsigned char *codeBuffer, int pc){
    unsigned char *opcode = &codeBuffer[pc];
    int opbytes = 1;
    printf("%04x \t",pc); //Print four hex bytes
    switch(*opcode){
        case 0x00: printf("NOP"); break;
        case 0x01: printf("LXI    B,#$%02x%02x",opcode[2],opcode[1]); opbytes=3;break;
        case 0x02: printf("STAX   B"); break;    
        case 0x03: printf("INX    B"); break;    
        case 0x04: printf("INR    B"); break;    
        case 0x05: printf("DCR    B"); break; 
        case 0x06: printf("MVI    B, #$%02x", opcode[1]); opbytes=2;break;
        case 0x07: printf("RLC"); break;
        case 0x08: printf("-"); break;
        case 0x09: printf("DAD B"); break;
        case 0x0a: printf("LDAX B"); break;
        case 0x0b: printf("DCX B"); break;
        case 0x0c: printf("INR C"); break;
        case 0x0d: printf("DCR C"); break;
        case 0x0e: printf("MVI C,#$%02x",opcode[1]); opbytes=2; break;
        case 0x0f: printf("RRC"); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        // case 0x: printf(""); break;
        default: printf("Error - NIY"); break;
    }
    printf("\n");
    return opbytes;
}

int main(int argc, char**argv){
    /*
     * The main logic loop:
     *  - Bring in the entire program into a buffer
     *  - While the offset is lower than the length of the buffer:
     *      - Pass the buffer into disassemble and the offset (how many codes have been processed)
     *      - Work out the code, print it.
     *      - Return how many bytes were read and add it to the offset
     *  - When finished, print how many bytes were read total.
    */
    FILE *f= fopen(argv[1], "rb");// Open the file that is given in the first Argument
    if (f==NULL) // If it doesn't exist, throw a hissy fit.
    {    
        printf("error: Couldn't open %s\n", argv[1]);    
        exit(1);    
    }

    //Get the file size and read it into a memory buffer    
    fseek(f, 0L, SEEK_END); 
    int fsize = ftell(f); 
    fseek(f, 0L, SEEK_SET); 

    //Allocate memory
    unsigned char *buffer=malloc(fsize);    

    fread(buffer, fsize, 1, f); // Reads the file into memory
    fclose(f); // closes the file

    int pc = 0;

    while(pc < fsize){
        pc += disassemble(buffer,pc); // This is the switch which reads the file.
    }
    printf("\nTotal Bytes Read: %d",pc);
    return 0;
}