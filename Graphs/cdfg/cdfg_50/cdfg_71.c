#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 527642785
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, long p_11, unsigned int p_13, char p_15,
        char p_19[3])
{
  unsigned short v_17;
  long long v_9;
  long long v_7;
  long v_5;
  int v;
  int result;
  v_17 = (unsigned short)43934;
  v_9 = (long long)p_13;
  if (! (~ ((long long)p_13 / (v_9 + 440LL))) < (long long)v_17) {
    v_5 = (long)((double)((unsigned long)(242472343L % (p_11 + 477L)) | (unsigned long)(
                          4294967212U * p_13)) / ((double)(- p_15) * -1.98919342434e+38 + 1024.));
    v_7 = (long long)p;
    v = (int)(~ v_9);
  }
  else {
    v_7 = (long long)(- ((double)v_17 - -1.30776175345e+38) - (double)(
                      (long long)p_19[2] / (v_9 % 4294919322LL + 177LL)));
    v = 64632;
    v_5 = (long)(- (! (~ -499569569)));
  }
  result = (int)((long long)((unsigned long)v + 15967UL * (unsigned long)p) - (
                 (long long)v_5 * v_7 + 30794LL));
  return result;
}


