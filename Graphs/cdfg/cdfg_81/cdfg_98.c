#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 381967111
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, signed char p_9[1], long long p_11,
                  unsigned short p_17)
{
  unsigned char v_15;
  unsigned char v_13;
  long long v_7;
  unsigned long long v_4;
  unsigned long v;
  unsigned long result;
  v_13 = (unsigned char)33;
  v = 4294929912UL;
  result = 60104UL;
  v_15 = (unsigned char)22;
  if ((unsigned long)((long)v_13 - -56782L) >= ~ ((result - (unsigned long)v_15) - (unsigned long)p_17)) {
    v_4 = (unsigned long long)p;
    v = ! (! result | (unsigned long)(3978137565U / (unsigned int)((int)p + 136)));
    result = (unsigned long)((unsigned long long)(- (! v)) / (0ULL / (
                                                              v_4 % (unsigned long long)(
                                                              (int)p + 655) + 230ULL) + 358ULL));
  }
  else {
    v_7 = (long long)((int)(- (! v_13)) | 30333);
    v = (unsigned long)((long long)((v * (unsigned long)p_9[0]) / 540UL) - 
                        0LL / ((long long)p % (p_11 + 228LL) + 371LL));
    result = (unsigned long)(4294933933U >> ((- v_7 - (long long)(v / 4294943614UL)) & 31LL));
  }
  return result;
}


