#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 4198187
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, unsigned int p_5, unsigned int p_9,
                float p_13, char p_15)
{
  unsigned long long v_17;
  short v_11;
  float v_7;
  unsigned long v;
  signed char result;
  v_17 = 371599881ULL;
  v_11 = (short)24698;
  v = (unsigned long)p_9;
  v = (unsigned long)(((unsigned long long)(p_5 % (p_9 + 546U)) / (v_17 * (unsigned long long)p + 748ULL)) % (
                      (unsigned long long)((float)v - - p_13) + 135ULL) - 570490986ULL);
  v_7 = (float)((unsigned long long)(((long long)v_11 - 416910136LL) % (long long)(
                                     ((int)v_11 / ((int)v_11 + 251) - (int)(
                                      p_13 / ((float)p_15 + 889.f))) + 801)) * 18446744073319718930ULL);
  result = (signed char)(- ((unsigned int)((float)((unsigned int)p * p_5) + -1.95012528802e+38f) % (
                            ~ ((unsigned int)v_7 ^ p_9) + 451U)));
  result = (signed char)((unsigned long)result / (v + 853UL) << ((int)p & 31));
  return result;
}


