#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 438884950
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, unsigned char p_4[1][3], unsigned long p_9,
        signed char p_11, long p_19)
{
  long v_21;
  unsigned long long v_17;
  unsigned char v_15;
  float v_13;
  char v_7;
  unsigned long v;
  int result;
  v_17 = 952415472ULL;
  v_15 = (unsigned char)p_9;
  v_13 = -8542562816.f;
  v_7 = (char)p_11;
  v = (unsigned long)p_19;
  result = -40439;
  while ((unsigned long long)v_7 <= ((35456830ULL - (unsigned long long)p_9) + (unsigned long long)(
                                     (float)p_11 * v_13)) - 778180498ULL) {
    v_21 = v_17 % (unsigned long long)(((long long)v_15 - -1002546524LL) + 386LL);
    v_17 = (unsigned long long)(- p_19);
    v_7 = (char)(! p_11);
    v_13 = (float)((long long)((-585882043L - (long)p_11) / ((p_19 | v_21) + 608L)) / 283496836280471086LL);
  }
  while_0_break: ;
  if ((unsigned long long)((unsigned long)(~ result ^ -1469075545) % (
                           ~ (! v) + 572UL)) < 18446744073709515690ULL) 
    result = (int)((long long)p + 39755LL);
  else result = (int)(354268370ULL * (unsigned long long)((unsigned int)2.04449629754e+38f % (
                                                          (unsigned int)p_4[0][0] * 25297165U + 675U)));
  return result;
}


