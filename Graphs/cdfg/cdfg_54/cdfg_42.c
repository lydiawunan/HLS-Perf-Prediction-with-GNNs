#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 363426257
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, short p_4[5][3], signed char p_7, short p_9,
          long p_13)
{
  float v_23;
  unsigned long v_21;
  unsigned long v_19;
  short v_17;
  float v_15;
  unsigned int v_11;
  char v;
  float result;
  v_23 = (float)p_7;
  v_21 = 14694096UL;
  v_19 = (unsigned long)p_7;
  v_17 = (short)-2333;
  v_15 = (float)p_13;
  v_11 = (unsigned int)p_7;
  while (v_15 / ((float)v_17 + 389.f) >= 300568800.f) {
    v_17 = v_21 >> ((v_19 + (unsigned long)-75.3445358276f) & 31UL);
    v_19 = (unsigned long)v_23;
    v_21 = ! 864239010UL;
    v_15 = (float)(~ (((long)p_4[4][0] - 362690035L) / (long)(((int)p | 50748) + 338)));
  }
  while_0_break: ;
  if ((unsigned long)(~ ((unsigned int)p_9 % (v_11 + 448U)) * 4294967292U) >= (unsigned long)(~ (
      (long)p_9 * ! p_13))) result = (float)(- (- ((int)p - (int)p_4[2][1])));
  else {
    v = (char)(~ (~ p_7));
    result = (float)((int)((float)p_4[0][1] - -2.343695508e+38f) + (int)v * 15273) * -6.99870716936e-10f;
  }
  return result;
}


