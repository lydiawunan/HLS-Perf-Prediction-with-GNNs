#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 942889305
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, short p_11, unsigned int p_13,
                 unsigned long p_17)
{
  long v_25;
  unsigned char v_23;
  unsigned char v_21;
  short v_19;
  int v_15;
  unsigned short v_9;
  unsigned char v_7;
  long long v_5;
  signed char v;
  unsigned int result;
  v_25 = 31385L;
  v_23 = (unsigned char)196;
  v_21 = (unsigned char)p_11;
  v_19 = (short)p_13;
  v_15 = (int)p_13;
  v_7 = (unsigned char)96;
  v_5 = (long long)p_17;
  v = (signed char)10;
  result = 3804233273U;
  while (((unsigned long)(result / (unsigned int)((int)p_11 + 995)) * (unsigned long)(
          56306L >> 11)) * (unsigned long)(- ((unsigned int)v + result)) != 29171UL) {
    v_7 = (unsigned char)((p_17 - (unsigned long)((int)p_11 % (v_15 + 907))) - (unsigned long)(
                          4294930009U / (p_13 + 993U) - (p_13 - (unsigned int)v)));
    v_5 = (long long)((unsigned int)((int)(~ v_23) - (64574 & (int)p)) % (
                      p_13 + 1002U));
    v = (signed char)((unsigned long)((result - p_13) | (unsigned int)(
                                      2607 / ((int)v + 72))) - (unsigned long)(
                      v_25 * -21L));
  }
  while_0_break: ;
  if ((long long)v_21 / (v_5 + 673LL) + (v_5 - 4294942863LL) != (long long)result) {
    v_5 = ((long long)result * 2008LL - - v_5) * (long long)(- v_7);
    v = (signed char)v_5;
    result = (unsigned int)(((int)v - (int)(- p)) - (int)7246878208.f);
  }
  else {
    result = (unsigned int)(3334UL - (unsigned long)v_15 % (p_17 * (unsigned long)v_19 + 950UL));
    v_9 = (unsigned short)(- (~ ((unsigned int)p_11 / (p_13 + 945U))));
    result = ~ result - (unsigned int)v_9;
  }
  return result;
}


