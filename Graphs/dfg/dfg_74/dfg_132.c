#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 683910264
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, unsigned char p_7)
{
  unsigned char v_9;
  long v_5;
  long long v;
  unsigned long result;
  v_9 = (unsigned char)54;
  v = (long long)((unsigned long)(! ((int)p_7 * (int)v_9) / 30) / (((unsigned long)(- (- v_9)) - 4294911681UL) + 710UL));
  v_5 = 565L;
  v = (long long)v_5;
  result = (unsigned long)(192981788LL % (~ ((long long)((int)p - (int)((unsigned short)7284316160.f)) * ~ v) + 305LL));
  return result;
}


