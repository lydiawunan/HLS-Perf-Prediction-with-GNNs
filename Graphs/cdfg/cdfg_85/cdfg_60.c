#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 633830984
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, double p_7, char p_9, unsigned long p_13,
          long long p_15)
{
  unsigned char v_19;
  signed char v_17;
  short v_11;
  unsigned int v_5;
  long v;
  float result;
  v_19 = (unsigned char)132;
  v_17 = (signed char)p_13;
  v_11 = (short)5602;
  v_5 = 29796U;
  result = -506.765686035f;
  while ((unsigned long long)(! v_5) > ! (p / (unsigned long long)((int)v_11 + 111) & (unsigned long long)(- p_13))) {
    v_17 = (float)v_19 + 1719319680.f;
    v_19 = (unsigned char)(~ (! ((long long)p_13 - p_15)));
    v_5 = (unsigned int)p_9;
    v_11 = (short)(16853LL - (long long)((unsigned int)(- result) + 4269933538U));
  }
  while_0_break: ;
  if (- ((float)(~ p_13) / ((2.6850314244e+38f - (float)p_15) + 143.f)) != (float)(~ v_17)) 
    result = (float)p;
  else {
    v_5 = (unsigned int)(-19962L - ((long)(-7.6338527618e+37f + (float)p_9) - 
                                    -324734451L / (long)((int)v_11 + 329)));
    v = (long)p_7;
    result = (float)((unsigned long long)(- (! v)) + (unsigned long long)(
                                                     (unsigned long)v | (unsigned long)v_5) / (
                                                     (p + 147ULL) + 680ULL));
  }
  return result;
}


