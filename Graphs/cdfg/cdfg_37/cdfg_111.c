#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1001076289
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p[4][2], unsigned long p_4[1], int p_7, short p_9,
                  long p_13)
{
  float v_19;
  char v_17;
  double v_15;
  unsigned long long v_11;
  double v;
  unsigned char result;
  v_17 = (char)p_9;
  v_15 = (double)p_4[0];
  v_11 = 18446744072779405418ULL;
  v = (double)p_4[0];
  while (v_11 - ! (v_11 - 44494ULL) != (unsigned long long)((int)((short)(
                                                            (double)(
                                                            (unsigned long long)p_13 * v_11) / (
                                                            v_15 + 690.))) / (
                                                            (int)p_9 + 995))) {
    v_19 = (int)v_17 - 105;
    v_17 = (char)v_19;
    v = (double)p_9;
    v_11 = 67029499ULL;
  }
  while_0_break: ;
  result = (unsigned char)((((unsigned long)p[0][0] % (p_4[0] + 616UL)) * (unsigned long)(
                            v - (double)p_7)) * (unsigned long)((int)((short)-1.84467440737e+19f) + (int)(- p_9)));
  return result;
}


