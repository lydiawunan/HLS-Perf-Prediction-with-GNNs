#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 825546925
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, int p_4, unsigned char p_7, float p_9, short p_21)
{
  long long v_19;
  short v_17;
  long long v_15;
  unsigned int v_13;
  unsigned short v_11;
  signed char v;
  float result;
  v_19 = (long long)p_4;
  v_17 = (short)9068;
  v_15 = 1012426015LL;
  v_13 = (unsigned int)p;
  v_11 = (unsigned short)p_9;
  v = (signed char)114;
  result = p;
  if ((unsigned long long)p_21 / ((unsigned long long)(~ v_13) % 18446744073709523639ULL + 293ULL) == (unsigned long long)(
      (long long)((int)(~ v_11) % ((int)((unsigned short)p) % 30808 + 832)) * (
      (long long)(p_9 - (float)v_15) - v_15 / (long long)(v_13 + 1008U)))) {
    v_17 = (short)(- (- v_13) - (unsigned int)v_17);
    v_11 = (unsigned short)(! (8431738368LL / ((long long)v_17 * v_19 + 718LL)));
    v_15 = - (v_15 + (long long)v_11) - (long long)p_7;
  }
  else {
    v_15 = (long long)(- (p - (float)p_4 * result));
    v_11 = (unsigned short)((float)v_13 * p_9 + (float)v_19);
    v = v;
  }
  while (- ((p * (float)p_4) / ((float)((int)v << ((int)p_7 & 7)) + 152.f)) < (float)(
         (int)((short)(- p_9 - - result)) % 6536)) {
    v_17 = v_15 ^ (long long)(v_13 + (unsigned int)((int)v_11 & 32));
    result = (float)v_17;
    v_15 = (long long)(! (18446744072899870348ULL >> 7UL));
    v = (signed char)((double)(p_9 * result + (float)((unsigned long long)p_7 % 15038ULL)) + -5014369120.03);
  }
  while_0_break: ;
  return result;
}


