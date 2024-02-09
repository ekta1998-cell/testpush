/*******************************************************************************************************************************************
 AES_wrapper
*******************************************************************************************************************************************/
#include "stdio.h"
// aes_encrpyt file included in header 
#include "aes_encrypt.c"
// in - it is the array that holds the plain text to be encrypted.
// key - it is the array that holds the key for encryption.
typedef unsigned char u8;
int loop;
// changed the input array and key array 
void main()
{
	u8 key[]   = {0x00  ,0x00  ,0x00  ,0x00  ,0x00  ,0x00  ,0x00 ,0x00 ,0x00  ,0x00  ,0x00  ,0x00  ,0x00  ,0x00 ,0x00  ,0x00};
	u8 in[]   = {0x10 ,0x11  ,0x22  ,0x78  ,0x40 ,0x00  ,0x00  ,0x00  ,0x00  ,0x00  ,0x00  ,0x00  ,0x00  ,0x00  ,0x00 ,0x01};
	u8 out[16];

	RijndaelKeySchedule(key);       // set AES round keys

	RijndaelEncrypt (in, out);
// Print the output ciphertext as an array of hexadecimal symbols
	for(loop =0; loop<16;loop++)
      printf("%0 2X ", out[loop]);	

}

