#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 95023731
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, short p_9, unsigned int p_13,
          unsigned short p_15, int p_17)
{
  short v_23;
  short v_21;
  char v_19;
  unsigned char v_11;
  unsigned long long v_7;
  unsigned long v_4;
  long long v;
  short result;
  v_21 = (short)-27464;
  v_19 = (char)-28;
  v_11 = (unsigned char)p_15;
  v_7 = (unsigned long long)p_17;
  v_4 = 3666111406UL;
  while ((unsigned long long)p_13 < ~ (v_7 - (unsigned long long)(125U - p_13))) {
    v_7 = (int)v_21 - 204;
    v_23 = (short)((unsigned int)p_17 * ~ (p_13 * 9075U));
    v_21 = (short)((unsigned long long)((unsigned long)(- p_15) * ~ v_4) - (
                   ~ v_7 - (unsigned long long)(-20913L ^ (long)p_17)));
    v_7 = ~ ((v_7 | (unsigned long long)v_19) - (unsigned long long)(
             (int)v_23 - -24651));
  }
  while_0_break: ;
  if ((unsigned long long)((unsigned int)p_9 - ((unsigned int)v_11 & 
                                                p_13 / 4294967222U)) != (
      (unsigned long long)p_15 ^ ((unsigned long long)((unsigned int)p_17 / (
                                                       p_13 + 903U)) - ~ p))) {
    v_4 = 0UL;
    v = (long long)(~ v_4);
    result = (short)(! (~ (-56LL + v)));
  }
  else result = (short)p;
  return result;
}


