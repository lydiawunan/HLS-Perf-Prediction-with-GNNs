#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 37172412
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, short p_5, long p_9[2][5], unsigned long p_11,
                  unsigned long p_13[2])
{
  unsigned char v_19;
  char v_17;
  unsigned long long v_15;
  signed char v_7;
  int v;
  unsigned long result;
  v_19 = (unsigned char)93;
  v_17 = (char)p_5;
  v_15 = (unsigned long long)p_11;
  v_7 = (signed char)p_13[1];
  v = (int)p_11;
  result = 762041949UL;
  while ((unsigned long long)(~ (p_11 * (unsigned long)p_5) / 3529208413UL) <= 
         ! (! v_15) - (unsigned long long)result) {
    result = (0UL ^ ((unsigned long)v_7 - p_11)) + (unsigned long)(- v / (
                                                                   (int)v_19 + 682));
    v_7 = (signed char)(! (p_13[1] | (unsigned long)v_17) - p_13[0] % (unsigned long)(
                                                            (int)(- v_7) + 948));
    v_15 = (unsigned long long)p_13[1];
  }
  while_0_break: ;
  if ((unsigned long long)((unsigned long)(35747L << 29UL) % (! ((unsigned long)v + p_13[1]) + 378UL)) != 
      ~ ((unsigned long long)result * v_15) * (unsigned long long)p_5) {
    v = (int)v_7;
    v = (int)((long)((int)(~ p) / (10284 * v + 330)) + (13802L & (long)p_5));
    result = (unsigned long)(! ((int)p * ((int)p | v)));
  }
  else result = (unsigned long)((long long)p_9[1][3] + ~ ((long long)p_11 * 133659380LL));
  return result;
}


