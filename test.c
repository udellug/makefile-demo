#include "assert.h"
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

int main() {
  int i;
  char samples[] = {
                    'h',
                    'i',
                    ' ',
                    'r',
                    'y',
                    'a',
                    'n',
  };
  for (i=0; i<7; i++) {
    assert(func0_decr(func0_encr(samples[i])) == samples[i]);
    assert(func1_decr(func1_encr(samples[i])) == samples[i]);
    assert(func2_decr(func2_encr(samples[i])) == samples[i]);
    assert(func3_decr(func3_encr(samples[i])) == samples[i]);
    assert(func4_decr(func4_encr(samples[i])) == samples[i]);
    assert(func5_decr(func5_encr(samples[i])) == samples[i]);
    assert(func6_decr(func6_encr(samples[i])) == samples[i]);
    assert(func7_decr(func7_encr(samples[i])) == samples[i]);
    assert(func8_decr(func8_encr(samples[i])) == samples[i]);
    assert(func9_decr(func9_encr(samples[i])) == samples[i]);
  }
  return 0;
}
