#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 884836297
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p[3], unsigned long long p_4, unsigned long p_7,
                  unsigned int p_9, unsigned long p_13)
{
  unsigned short v_21;
  unsigned long long v_19;
  unsigned char v_17;
  unsigned long v_15;
  short v_11;
  signed char v;
  unsigned long result;
  v_19 = (unsigned long long)p[0];
  v_17 = (unsigned char)p[0];
  v_15 = 49441UL;
  v_11 = (short)p_7;
  v = (signed char)p_9;
  result = (unsigned long)p_4;
  while ((((unsigned long long)p_7 * p_4) % (unsigned long long)(! result + 933UL)) * (unsigned long long)(
         192593784U / (p_9 + 968U) + (unsigned int)v_11) >= (unsigned long long)p_13) {
    v_21 = v_19 & (unsigned long long)(v_15 % 28345392UL);
    v = (signed char)((unsigned long long)(p_7 - p_13) % ((unsigned long long)p[0] % 365216446ULL + 873ULL) + (unsigned long long)(
                      (long long)(111 | (int)v_21) * p[1]));
    result = 0UL;
    v_11 = (short)p_13;
  }
  while_0_break: ;
  result = (unsigned long)(! ((unsigned long long)p[1] % (p_4 + 14ULL) ^ (unsigned long long)(
                              (float)v * -1.32189793295e+38f)));
  return result;
}


