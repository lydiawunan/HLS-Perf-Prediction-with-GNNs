#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 637660871
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, unsigned long p_4[3], int p_9, short p_11,
              long p_15[4][5])
{
  float v_23;
  unsigned short v_21;
  signed char v_19;
  signed char v_17;
  unsigned long v_13;
  char v_7;
  unsigned int v;
  long long result;
  v_23 = (float)p_4[1];
  v_19 = (signed char)35;
  v_17 = (signed char)p_15[0][4];
  v_13 = 510829958UL;
  v_21 = (unsigned short)(0 - (int)(- (! p)));
  v_7 = (char)(((((unsigned long)p_11 ^ p_4[0]) - v_13 % (unsigned long)(
                                                  p_15[3][3] + 252L)) + (unsigned long)(
                (long)v_17 * 326538166L)) - (unsigned long)((long)((int)(~ v_19) - (int)p_11) ^ (
                                                            -27224L ^ (long)(
                                                            (int)v_19 * (int)v_21))));
  v = (unsigned int)(! p_9 - -10866);
  result = (long long)(((unsigned long)((int)p * 105) * p_4[1] + (unsigned long)(
                                                                 v & (unsigned int)v_7) * (
                                                                 (unsigned long)v % 764840837UL)) >> 23);
  return result;
}


