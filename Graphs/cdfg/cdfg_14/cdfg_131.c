#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 904797899
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, short p_5, signed char p_9, float p_11,
              unsigned long p_15[3][4])
{
  int v_17;
  unsigned char v_13;
  long long v_7;
  signed char v;
  long long result;
  v_17 = -112086343;
  result = -248150761LL;
  if ((int)p_9 % ((int)(- p_9) * 254 + 106) == (int)p_9 * - (! v_17)) 
    v_7 = (long long)(- (- (- p_11)));
  else {
    v_7 = (long long)(- (- p_11) + -69957864.f);
    v_13 = (unsigned char)(((17633LL / (v_7 + 361LL)) * result) * (long long)(
                           ~ p_15[0][1] / 28886UL));
    v_7 = (long long)v_13;
  }
  if (v_7 > (long long)p_9) result = (long long)(89L + p);
  else {
    v = (signed char)p_5;
    result = (long long)v;
  }
  return result;
}


