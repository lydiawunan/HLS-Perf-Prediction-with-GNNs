#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 471454608
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, char p_7[5][2], unsigned int p_9, signed char p_15,
                unsigned short p_23)
{
  signed char v_27;
  char v_25;
  long v_21;
  signed char v_19;
  unsigned char v_17;
  long v_13;
  double v_11;
  long v_5;
  long long v;
  signed char result;
  v_27 = (signed char)73;
  v_25 = (char)p_9;
  v_21 = 26726L;
  v_17 = (unsigned char)p_23;
  v_11 = 1.73315680724e+38;
  v_5 = (long)p_7[2][0];
  if (- (p % (long)((int)p_15 + 552)) - - (~ p) > - ((long)((int)v_27 + (int)((signed char)394.668440201)) + v_5)) {
    v_13 = (long)(~ (! p_15));
    v_5 = (long)(0. * (v_11 - 13152.)) | v_13;
    v = (long long)(18446744073709551615ULL / ((unsigned long long)(~ p_7[4][1]) / (
                                               (22095ULL - (unsigned long long)p_9) + 132ULL) + 345ULL));
  }
  else {
    v_19 = (signed char)((unsigned int)p_23 - ((42U ^ p_9) | (unsigned int)(
                                               34656 * (int)v_25)));
    v_5 = (~ p + (long)((int)v_17 * (int)v_19)) | (long)(7.34266429185e+37f * (float)v_21 + -872619712.f);
    v = (long long)(- p_15);
  }
  result = (signed char)(- v % (long long)(~ (p % (v_5 + 298L)) + 570L));
  return result;
}


