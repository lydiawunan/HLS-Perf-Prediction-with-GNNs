#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 524737840
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, long p_15)
{
  short v_13;
  unsigned int v_11;
  signed char v_9;
  float v_7;
  signed char v_5;
  unsigned short v;
  long result;
  v_13 = (short)p;
  v_11 = 501227846U;
  v_9 = (signed char)p;
  v_7 = (float)p_15;
  v_5 = (signed char)56;
  v = (unsigned short)p_15;
  result = (long)(0ULL - ((unsigned long long)(-63L - p_15) + (unsigned long long)p % 18446744072679354570ULL));
  while ((float)(~ (- ((int)v % 54827))) >= (float)(-607212390LL % (long long)(
                                                    (int)(! v_5) + 700)) - 
                                            - v_7 / ((float)(4294955441U + (unsigned int)v_9) + 864.f)) {
    v_7 = (unsigned long)v_13 + ((unsigned long)v_11 + 827408201UL);
    result = (long)(~ (18446744073709506047ULL + (unsigned long long)(
                       (long)p | p_15)));
    v = (unsigned short)(~ (6UL << 31UL));
    v_7 = v_7;
  }
  while_0_break: ;
  return result;
}


