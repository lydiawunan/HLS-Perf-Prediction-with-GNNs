#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 277416967
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, float p_7[4], float p_9[1][5], short p_11,
                float p_13)
{
  int v_17;
  float v_15;
  unsigned short v_4;
  signed char v;
  signed char result;
  v_17 = (int)p_11;
  v_15 = -5816948224.f;
  result = (signed char)((unsigned int)(((167960472 % ((int)p_11 + 979)) / (
                                         (int)(p_13 - v_15) + 964)) % (
                                        -101 % ((int)((signed char)((double)v_17 - 9024181966.5)) + 1002) + 198)) / 4534U);
  v = (signed char)p_9[0][0];
  v_4 = (unsigned short)(- p);
  result = (signed char)((double)(((int)(- result) & (int)(! v)) % ((
                                                                    (int)v_4 + (int)((unsigned short)p)) * -120 + 108)) + - (
                         ((double)p_7[3] + p) * (-71. + p)));
  return result;
}


