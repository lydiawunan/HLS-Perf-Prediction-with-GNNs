#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 208407661
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, short p_4[4][3], float p_6, unsigned short p_8,
                 unsigned long p_10[3][5])
{
  signed char v_19;
  signed char v_17;
  short v_15;
  unsigned long long v_13;
  unsigned long v;
  unsigned int result;
  v_19 = (signed char)p;
  v_17 = (signed char)-45;
  v_15 = (short)p_8;
  v_13 = 18446744073508102419ULL;
  v = 3800965758UL;
  while ((float)((unsigned long long)p_10[0][1] - ~ (v_13 - (unsigned long long)p)) > p_6) {
    v_13 = (long)v_19 / ((long)v_15 / -486543783L + 323L);
    v_15 = (short)(((double)(p_10[1][3] + (unsigned long)v_17) * 1.24484215965e-35) * (double)(
                   (7520 << (v_13 & 15ULL)) * 72));
    v_19 = (signed char)(~ p);
    v_13 = (unsigned long long)(! ((long long)(3.29594455407e+38 + (double)p_6) >> 54LL));
  }
  while_0_break: ;
  if ((unsigned long)((float)(p_10[0][1] - 24975UL) / (((float)((int)p_4[1][0] & (int)((short)-8705562597.04)) - (
                                                        (float)p + p_6)) + 117.f)) < - (
      (unsigned long)(- p_8) * (v - 11UL))) result = (unsigned int)(~ (! (
                                            (int)p / ((int)p_4[0][0] + 392))));
  else result = (unsigned int)((int)((unsigned short)(-2531043584.f + (float)(
                                                      (unsigned int)p_6 + 16089U))) % (
                               (int)(~ p_8) + 891));
  return result;
}


