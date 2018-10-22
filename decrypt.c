#include "stdio.h"
#include "b64.h"
#include "stdlib.h"
#include "func0.h"
#include "func1.h"
#include "func2.h"
#include "func3.h"
#include "func4.h"
#include "func5.h"
#include "func6.h"
#include "func7.h"
#include "func8.h"
#include "func9.h"

int main(int argc, char** argv) {
  char plaintext[128];
  char ciphertext[128];
  int i = 0;
  char c;

  printf("%s","ciphertext: ");
  while (c != '\n' && i < 128) {
    c = getc(stdin);
    ciphertext[i] = c;
    i++;
  }

  char *b64 = b64_decode(&ciphertext, 128);

  for (i=0; i<128; i++) {
    char stage0 = func0_decr(b64[i]);
    char stage1 = func1_decr(stage0);
    char stage2 = func2_decr(stage1);
    char stage3 = func3_decr(stage2);
    char stage4 = func4_decr(stage3);
    char stage5 = func5_decr(stage4);
    char stage6 = func6_decr(stage5);
    char stage7 = func7_decr(stage6);
    char stage8 = func8_decr(stage7);
    char stage9 = func9_decr(stage8);
    plaintext[i] = stage9;
  }

  printf("plaintext: %s\n",&plaintext);
  free(b64);
  return 0;
}
