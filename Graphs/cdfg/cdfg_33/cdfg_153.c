#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 500483442
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, unsigned char p_4, unsigned short p_6,
                 unsigned long long p_11[1], double p_13)
{
  long long v_19;
  signed char v_17;
  unsigned short v_15;
  unsigned int v_9;
  unsigned int v;
  unsigned int result;
  v_19 = (long long)p_11[0];
  v_17 = (signed char)-1;
  v_15 = (unsigned short)p_4;
  v_9 = (unsigned int)p_13;
  v = 3740916779U;
  result = 3987240114U;
  while (! ((unsigned long long)(- result) % ((p_11[0] + (unsigned long long)v_15) + 1023ULL)) != 
         (((unsigned long long)p_6 - 931918991ULL) - (unsigned long long)v_17) * (unsigned long long)v_9) {
    result = v_19 & 865928204LL;
    v_15 = (unsigned short)(~ ((result * 4294958169U) * (v_9 ^ 163U)));
    result = (unsigned int)((long long)v | (long long)(! v_9) / (-38322LL / (long long)(
                                                                 (int)p_4 + 551) + 634LL));
    v_17 = (signed char)((double)(! (~ p)) * - (- p_13));
  }
  while_0_break: ;
  while ((long long)(! (4294949304U / (unsigned int)(p + 699) & (unsigned int)(
                        (int)p_4 + (int)p_6))) >= (-27496LL ^ (long long)result)) {
    v = (unsigned long long)v_9 & ((unsigned long long)v ^ 723992139ULL);
    v_9 = (unsigned int)(~ p_11[0]);
    result = ! (~ v_9 / 4294946236U);
  }
  while_0_break_0: ;
  return result;
}


