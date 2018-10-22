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

  printf("%s","plaintext: ");
  while (c != '\n' && i < 128) {
    c = getc(stdin);
    plaintext[i] = c;
    i++;
  }
  for (i=0; i<128; i++) {
    char stage0 = func0_encr(plaintext[i]);
    char stage1 = func1_encr(stage0);
    char stage2 = func2_encr(stage1);
    char stage3 = func3_encr(stage2);
    char stage4 = func4_encr(stage3);
    char stage5 = func5_encr(stage4);
    char stage6 = func6_encr(stage5);
    char stage7 = func7_encr(stage6);
    char stage8 = func8_encr(stage7);
    char stage9 = func9_encr(stage8);
    ciphertext[i] = stage9;
  }

  char* b64 = b64_encode(&ciphertext, 128);
  printf("ciphertext: %s\n",b64);
  free(b64);
  return 0;
}
