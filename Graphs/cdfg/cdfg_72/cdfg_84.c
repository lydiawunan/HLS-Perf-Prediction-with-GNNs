#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 52606195
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, char p_13)
{
  unsigned char v_17;
  signed char v_15;
  long v_11;
  unsigned int v_8;
  unsigned int v_6;
  unsigned char v_4;
  unsigned int v;
  int result;
  v_17 = (unsigned char)p_13;
  v_15 = (signed char)59;
  v_11 = -17896L;
  v_8 = 4294910839U;
  v_6 = 4171018097U;
  v_4 = (unsigned char)3;
  result = -57597;
  if ((unsigned int)(-80 / ((int)p / -36386 + 711)) + - v_6 < (unsigned int)(! (~ (- p)))) {
    v = ~ ((unsigned int)result / 4294944781U + ((unsigned int)v_15 + v_8));
    v_8 = (unsigned int)((int)(! p) / ((int)v_15 + 289));
    v_6 = (unsigned int)(! ((long)p_13 - v_11 % -865793093L));
  }
  else {
    v_4 = (unsigned char)(567512618L + (long)p);
    v_8 = (unsigned int)(! ((unsigned long)p - 45156UL) % 265UL);
    v = (unsigned int)((unsigned long long)(! v_11) + (14694ULL - (unsigned long long)v_17) / (unsigned long long)(
                                                      (int)p_13 / ((int)p_13 + 179) + 535));
  }
  if (! (v_8 % 4294942518U) != (unsigned int)(200 % ((int)v_4 + 371))) {
    v_4 = (unsigned char)(0 % (unsigned long)((v_11 | (long)4982411901.06) + 771L) ^ 26050UL);
    v_11 = (long)(-6408 - (int)p);
    result = (int)((v * (unsigned int)v_4 | v_6) - ~ v_8 % (unsigned int)(
                                                   ((int)p >> (v_11 & 7L)) + 479));
  }
  else result = ~ (! ((int)p_13 / ((int)p + 425)));
  return result;
}


