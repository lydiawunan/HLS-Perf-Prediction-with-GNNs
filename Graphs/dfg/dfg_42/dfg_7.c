#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 870439733
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, unsigned int p_5[3][5][4], long long p_11,
                  unsigned short p_13, unsigned int p_15)
{
  unsigned char v_17;
  float v_9;
  long v_7;
  short v;
  unsigned char result;
  v_17 = (unsigned char)p_5[0][3][2];
  v_7 = (long)p_13;
  v = (short)p;
  v_9 = (float)((unsigned long)(! p_15) % (((unsigned long)(! v_7) + (unsigned long)(
                                            (unsigned int)p_13 / (p_5[2][2][3] + 951U))) + 193UL) - (unsigned long)(
                ((p_15 * p_5[2][3][1]) / (unsigned int)((int)v + 667)) * (unsigned int)v_17));
  v_7 = (long)(- (- (- v_9) - 215.f));
  v_9 = (float)((((p_11 - (long long)p_5[0][2][3]) - (long long)(- p)) - (long long)(
                 v_7 & (long)((int)p_13 / 86))) & (long long)(- (! v)));
  result = (unsigned char)((long)(- (p / ((double)v + 916.) + (double)(- p_5[2][0][2]))) % (
                           (v_7 >> ((long)(- v_9) & 31L)) + 739L));
  return result;
}


