#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 783890422
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p[4], int p_5, double p_7, long p_9,
                   double p_11)
{
  long long v_15;
  unsigned int v_13;
  char v;
  unsigned short result;
  v_15 = -33385LL;
  v_13 = 18506U;
  v = (char)((221867272U / (unsigned int)(p_5 + 746)) % (unsigned int)(
             ! ((int)p_7 / -827435968) + 302));
  if ((long long)(-21666L % ((long)v * p_9 + 928L) - (long)(p_11 * p_7) * ~ p_9) == 
      (long long)v_13 / (v_15 + 87LL) + (long long)p[2]) result = (unsigned short)(- (- (- -74.6986588776)));
  else {
    v = (char)(- p_7);
    result = (unsigned short)(((int)(- v) + ((int)p[3] + p_5)) & p_5);
  }
  return result;
}


