#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 962959299
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, unsigned long long p_4, float p_7[4][5][2],
          unsigned long p_11[2][1], short p_13)
{
  signed char v_17;
  long long v_15;
  unsigned int v_9;
  unsigned int v;
  float result;
  v_15 = -40921LL;
  v_9 = (unsigned int)p_13;
  result = (float)p_4;
  v_17 = (signed char)((int)p_13 & (int)((short)(- (- result))));
  if ((unsigned long)((int)p_13 * (int)((short)(-924.93790515 * (double)v_15))) * (
      (unsigned long)(~ v_17) * (933UL % (unsigned long)((int)p + 195))) < (unsigned long)(
      (int)p_13 | -15744)) result = (float)((unsigned long long)p - p_4);
  else {
    result = (float)((unsigned long)v_9 ^ (unsigned long)(-48.6091553508 / (
                                                          (double)p + 277.)) % (
                                          p_11[0][0] + 179UL));
    v = (unsigned int)((1.84467440737e+19f * (p_7[1][2][0] + result)) * p_7[2][4][0]);
    result = (float)(! (18446744073709537172ULL - ((unsigned long long)v | 18446744073052974319ULL)));
  }
  return result;
}


