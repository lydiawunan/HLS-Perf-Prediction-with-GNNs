#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 822214055
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p[5][2][3], long long p_7, float p_9,
                 unsigned short p_11, unsigned int p_13)
{
  unsigned short v_19;
  long long v_17;
  short v_15;
  signed char v_4;
  unsigned char v;
  unsigned int result;
  v_19 = (unsigned short)42734;
  v_15 = (short)p_11;
  result = 4294959522U;
  v_17 = ~ ((p_7 - (long long)v_19) - (long long)(~ result)) << 44;
  v_4 = (signed char)(p_13 / 297452945U | ((unsigned int)((int)(~ v_15) - (int)((short)(
                                                          -4279886932.44 - (double)v_17))) + ~ (
                                           591409925U - (unsigned int)p_11)));
  v = (unsigned char)(~ ((long long)((int)v_4 / ((int)p[4][0][2] + 223)) % (
                         p_7 / 917310985LL + 958LL)) % ((long long)((double)p_9 + (
                                                                    (double)(- p_11) + 4.55808459734e+37)) + 724LL));
  result = (unsigned int)v;
  return result;
}


