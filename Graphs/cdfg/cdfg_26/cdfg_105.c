#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 164509467
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, unsigned short p_5, double p_7,
                  signed char p_9[5], long p_15[3][2])
{
  float v_25;
  unsigned short v_23;
  signed char v_21;
  char v_19;
  short v_17;
  unsigned long v_13;
  long v_11;
  unsigned int v;
  unsigned char result;
  v_25 = (float)p_5;
  v_23 = (unsigned short)p_7;
  v_21 = (signed char)58;
  v_19 = (char)105;
  v_17 = (short)-5354;
  v_13 = 26055UL;
  v_11 = (long)p;
  v = 4294923391U;
  result = (unsigned char)139;
  while ((int)(((double)(- p_15[1][0]) - p_7 / 29805.) / ((double)(10452 - (int)v_17) + 499.)) == (
         (int)(~ v_19) / 29865 & (int)v_17)) {
    result = (unsigned long)v_21 * 668693722UL;
    v_17 = (short)(((float)v_23 * v_25 + (float)((int)p_9[4] / ((int)v_23 + 633))) + (float)(
                   (unsigned long)(-11 >> ((int)p & 7)) % (((unsigned long)p_9[2] - v_13) + 892UL)));
    v_21 = (signed char)(- (- -57445));
    v_19 = (char)(! ((long)v_17 & p_15[2][1]) % (long)((int)(~ v_17) / (
                                                       ((int)p + 120) + 689) + 755));
  }
  while_0_break: ;
  while ((unsigned long)((unsigned int)p - v) == (unsigned long)((long)(- (
                                                                 (double)p_5 / (
                                                                 p_7 + 369.))) * (
                                                                 (long)p_9[0] / (
                                                                 38L * v_11 + 317L)))) {
    result = v_13 + 4294967222UL;
    v_11 = (long)p;
    v_13 = (unsigned long)(~ (- v_11));
    v = 54771U;
  }
  while_0_break_0: ;
  return result;
}


