#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 577382264
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, unsigned char p_4, unsigned long p_9,
              float p_19)
{
  double v_23;
  double v_21;
  unsigned int v_17;
  unsigned int v_15;
  char v_13;
  short v_11;
  unsigned long v_7;
  unsigned int v;
  long long result;
  v_23 = (double)p;
  v_21 = 2.43233433203e+38;
  v_17 = 1031660842U;
  v_15 = (unsigned int)p_9;
  v_13 = (char)p;
  v_11 = (short)-21728;
  v_7 = 3369550815UL;
  v = 36939U;
  result = (long long)p;
  v_21 = (double)((unsigned long)((unsigned int)(- v_21) * p) & 31458UL);
  while ((unsigned long)((p + (unsigned int)p_4) * (v + 4294938206U)) + ~ v_7 >= ! (
         p_9 + (unsigned long)((long)v_11 % -56183L))) {
    v_13 = (unsigned long)v_15 - (unsigned long)((long)v_13 * -30018L);
    v_7 = (unsigned long)(- ((double)p_19 / (v_21 / (v_23 + 664.) + 563.)));
    result = (long long)((int)((short)((499.621002197f / ((float)p_9 + 254.f)) / (
                                       (float)p_9 + 424.f))) % 7365);
    v_11 = (short)(1092144446UL / (unsigned long)((~ v_17 + 4294967191U) + 515U));
  }
  while_0_break: ;
  return result;
}


