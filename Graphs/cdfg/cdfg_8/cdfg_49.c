#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 195194229
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, short p_5, long p_7)
{
  char v_21;
  unsigned short v_19;
  unsigned char v_17;
  unsigned short v_15;
  double v_13;
  unsigned long long v_11;
  unsigned long long v_9;
  float v;
  unsigned long result;
  v_21 = (char)-40;
  v_19 = (unsigned short)60833;
  v_17 = (unsigned char)p;
  v_15 = (unsigned short)p;
  v_13 = (double)p_5;
  v_11 = 18446744073709507330ULL;
  v_9 = (unsigned long long)p_5;
  v = -3.07125961493e+38f;
  while ((unsigned long long)(- (- ((int)p_5 % 97))) <= (unsigned long long)(
                                                        (p_7 - 60344520L) * 2747L) * v_9) {
    v_15 = (unsigned long long)v_15 % (((unsigned long long)v_13 & (v_11 & 87ULL)) + 447ULL);
    v_9 = (! v_9 % (unsigned long long)(((long long)v_21 - p) + 497LL)) % (unsigned long long)(
          (-88L | -720565731L * (long)p_5) + 923L);
    v_11 = (unsigned long long)((int)((unsigned short)((float)((unsigned long long)v_17 * v_9) / 9117414400.f)) % (
                                (int)(- v_19) + 604));
    v_9 = (unsigned long long)(-(unsigned short)37491);
  }
  while_0_break: ;
  result = (unsigned long)(~ ((91029264LL % (p + 886LL)) * (long long)(
                              (float)p / (v + 380.f))));
  return result;
}


