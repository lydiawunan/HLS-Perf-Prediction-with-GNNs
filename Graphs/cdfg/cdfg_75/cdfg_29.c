#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 11820331
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, signed char p_4, unsigned char p_11)
{
  unsigned long long v_23;
  unsigned int v_21;
  float v_19;
  long v_17;
  short v_15;
  char v_13;
  signed char v_9;
  long long v_7;
  unsigned char v;
  int result;
  v_23 = 18446744073313777637ULL;
  v_21 = 3793214534U;
  v_17 = (long)p_4;
  v_15 = (short)-4025;
  v_13 = (char)123;
  v_7 = -679862315LL;
  result = (int)p;
  if (~ (p & (unsigned int)p_11) % (unsigned int)((int)((unsigned char)-5.45409811331e+37) / (
                                                  (int)p_11 + 809) + 847) != (
      (unsigned int)(! (! v_13)) | 4294902126U)) {
    v = (unsigned char)((unsigned long)(~ result));
    result = (int)v_15;
    v_9 = (signed char)v_13;
  }
  else {
    v_19 = (float)(- (! (v_23 % (unsigned long long)(p + 488U))));
    v = (unsigned char)0;
    v_9 = (signed char)0;
  }
  while (result > (int)((signed char)-719.738098145f) % -109 >> (p / (unsigned int)(
                                                                 (int)p_4 + 554) & 31U)) {
    v_9 = (long long)v_9 % ((v_7 << ((int)v % -95 & 63)) + 796LL);
    v_7 = (long long)((int)p_4 | (int)p_11);
    v = (unsigned char)(! (- (p / (unsigned int)((int)p_4 + 707))));
    result = (int)p_11;
  }
  while_0_break: ;
  return result;
}


