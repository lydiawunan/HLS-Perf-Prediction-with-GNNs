#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 951525744
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, long p_4, long long p_6, unsigned long long p_8[2][2],
         float p_15)
{
  short v_23;
  unsigned long v_21;
  char v_19;
  signed char v_17;
  char v_13;
  unsigned char v_11;
  double v;
  long result;
  v_23 = (short)30909;
  v_21 = 4294939581UL;
  v_19 = (char)92;
  v_17 = (signed char)p_15;
  v_13 = (char)-33;
  v = (double)p_4;
  result = (long)p;
  if (- (p_8[1][0] - (unsigned long long)v_21) << ((int)v_17 & 63) < (unsigned long long)(
      v_21 - (unsigned long)(~ ((long)p_15 ^ p_4)))) {
    v_23 = (short)-1.12010194343e+38;
    v_19 = (char)v_23;
    v_23 = (short)-57;
  }
  else {
    v_13 = (char)(- ((float)(~ v_17) * - p_15));
    v = (double)result;
    v_21 = ~ (~ v_21 | 84UL);
  }
  if ((long long)v_21 * ((-37442LL | (long long)result) / (long long)(
                         -29607 / ((int)p_15 + 71) + 877)) != (long long)v_23) 
    result = (long)(~ ((long long)((long)p - p_4) ^ (p_6 & 4197368827LL)));
  else {
    v_17 = (signed char)(- (- (! v_19)));
    v_11 = (unsigned char)((int)(- (- p_15)) * ((int)(~ v_17) / 648));
    result = (long)(p_8[0][1] % (unsigned long long)(((int)((unsigned char)v) | (int)v_11) * (
                                                     (int)p & (int)v_13) + 151));
  }
  return result;
}


