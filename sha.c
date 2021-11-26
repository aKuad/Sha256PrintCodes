/**
 * sha.c
 *
 * Author: aKuad 
 *
 * Published with CC0 license
 */

#include <stdio.h>
#include <openssl/sha.h>

int getTextLen(const unsigned char txt[]) {
  int i = 0;
  for(i = 0; txt[i] != '\0'; i++) {}
  return i;
}

int main() {
  unsigned char org[64] = "hello";
  unsigned char has[SHA256_DIGEST_LENGTH];

  SHA256(org, getTextLen(org), has);

  /*SHA256_CTX obj;
  SHA256_Init(&obj);
  SHA256_Update(&obj, org, sizeof(org)-1);
  SHA256_Final(has, &obj);*/

  printf("%s\n", org);
  for(int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
    printf("%02x", has[i]);
  }
  printf("\n");

  return 0;
}
