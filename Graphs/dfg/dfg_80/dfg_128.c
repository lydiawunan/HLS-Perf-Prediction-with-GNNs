#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 569911463
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, long long p_5, double p_9[1][3][2], short p_15)
{
  unsigned int v_13;
  long long v_11;
  unsigned short v_7;
  short v;
  unsigned char result;
  v_13 = 4294904958U;
  v_11 = -275304018LL;
  v_7 = (unsigned short)13547;
  v_7 = (unsigned short)(((unsigned long long)v_11 % (18446744073650131393ULL / (unsigned long long)(
                                                      (v_13 + (unsigned int)v_7) + 894U) + 410ULL)) * (unsigned long long)(
                         (18 % (((int)p_15 + (int)((short)p_9[0][0][0])) + 936)) / -70));
  v_7 = (unsigned short)(- ((49905U & (unsigned int)((int)((unsigned short)p_9[0][0][1]) % (
                                                     (int)v_7 + 632))) ^ 11U));
  v = (short)(- ((long long)(p / (p + 872)) + 18417LL / (p_5 + 679LL)) & (long long)v_7);
  result = (unsigned char)((int)((short)-2.13014769635e+38f) / ((int)(! v) + 395));
  return result;
}


