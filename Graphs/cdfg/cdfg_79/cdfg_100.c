#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 214103475
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p[2][5], float p_7, unsigned short p_9, signed char p_19[1][4],
         unsigned int p_23)
{
  short v_29;
  char v_27;
  long v_25;
  char v_21;
  signed char v_17;
  unsigned char v_15;
  char v_13;
  unsigned long long v_11;
  double v_5;
  unsigned int v;
  long result;
  v_29 = (short)-17570;
  v_27 = (char)p_19[0][3];
  v_25 = (long)p_9;
  v_21 = (char)87;
  v_17 = (signed char)p_23;
  v_15 = (unsigned char)p[0][2];
  v_13 = (char)p[0][1];
  v_5 = 898.29085231;
  while (((long)((int)v_13 + (int)v_15) / (v_25 + 545L)) / (long)(((int)(! v_13) | 
                                                                   (int)p_19[0][0] / (
                                                                   (int)v_27 + 152)) + 73) > ~ v_25) {
    v_27 = (char)((int)p_9 - (int)((unsigned short)((float)((unsigned long)p[1][2] + (unsigned long)p_23) - (
                                                    48.f + p_7))));
    v_21 = (char)v_29;
    v_25 = (long)p_19[0][1] - (long)v_13 / -17384L;
  }
  while_0_break: ;
  if (45518UL * (unsigned long)(- ((int)v_21 << ((int)v_21 & 7))) < (unsigned long)(~ p_23)) {
    v_11 = (unsigned long long)(! ((int)v_13 - (int)(~ p_9)));
    v = (unsigned int)((unsigned long long)(! p[0][4] - (long)(v_5 * (double)p_7)) | (
                       (unsigned long long)(! p_9) - v_11));
    result = (long)(~ v);
  }
  else {
    v_5 = (double)(((long)v_17 ^ (56558L - p[0][2])) | (long)(-173845409 >> (
                                                              (int)(~ p_19[0][0]) & 31)));
    v_15 = (unsigned char)(- (- v_5));
    result = (long)v_15;
  }
  return result;
}


