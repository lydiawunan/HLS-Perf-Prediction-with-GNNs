#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 733345035
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, double p_5, signed char p_7, unsigned long long p_9,
         unsigned char p_11)
{
  long v_27;
  unsigned long v_25;
  unsigned int v_23;
  unsigned char v_21;
  unsigned char v_19;
  int v_17;
  unsigned short v_15;
  long v_13;
  unsigned long v;
  long result;
  v_27 = -24065L;
  v_25 = (unsigned long)p_9;
  v_21 = (unsigned char)221;
  v_19 = (unsigned char)p;
  v_17 = (int)p_9;
  v = (unsigned long)p_7;
  if ((unsigned long long)((int)((float)(v_25 + (unsigned long)v_17) - (
                                 p + (float)v_27)) >> ((((int)v_19 << 6L) + (int)p) & 31)) > ~ p_9) {
    result = (long)(113 / ((int)v_19 + 89));
    v_13 = (long)(((unsigned long long)v_17 / (p_9 / ((unsigned long long)p + 264ULL) + 116ULL)) % 10783ULL);
    v_15 = (unsigned short)result;
  }
  else {
    v_23 = (unsigned int)v;
    v_15 = (unsigned short)(! (- p_9 * (unsigned long long)((unsigned int)v_21 % (
                                                            v_23 + 611U))));
    v_13 = (long)(0 - (unsigned int)p);
  }
  if (((p_9 % (p_9 + 776ULL)) / ((unsigned long long)(p_5 - (double)p_11) + 741ULL)) / (unsigned long long)(
      v_13 + 415L) > ((4123ULL - p_9) / (unsigned long long)(47053LL * (long long)p_7 + 379LL)) / (
                     (unsigned long long)(p * (float)v_15 - 4294907648.f) + 717ULL)) {
    v = ! ((unsigned long)p * 4294938877UL) - (unsigned long)(- (p_5 - p_5));
    result = (long)(! (- (- v)));
  }
  else {
    v = (unsigned long)(- (58846ULL % (unsigned long long)((int)p_7 + 924) - p_9));
    result = (long)((unsigned long long)v - 18446744073709540178ULL);
  }
  return result;
}


