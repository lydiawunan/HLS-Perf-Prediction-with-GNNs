#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 457283730
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p, double p_5[1][2], long long p_13)
{
  int v_11;
  unsigned long long v_9;
  signed char v_7;
  float v;
  unsigned char result;
  v_11 = (int)p_5[0][0];
  v_9 = 18446744073159965587ULL;
  v = -598.760253906f;
  v_7 = -(signed char)20;
  if ((double)v + (p_5[0][1] * (double)v_7) / ((double)(p * -636462235LL) + 771.) < (double)(
      - (v_9 / 16908ULL) / (unsigned long long)(((long long)(- v_11) - p_13) + 676LL))) 
    result = (unsigned char)168;
  else result = (unsigned char)((! p & 3281260607LL) / 40177LL);
  return result;
}


