#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 115051173
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, float p_4, unsigned long long p_9[5][3],
              float p_11[2], signed char p_13)
{
  signed char v_17;
  unsigned short v_15;
  short v_7;
  float v;
  long long result;
  v_17 = (signed char)-34;
  v_15 = (unsigned short)65532;
  v_7 = (short)v_17;
  v = (float)v_15 - (- p_11[1] / 50634.f + (float)v_15);
  v_7 = (short)((float)(49620UL + (unsigned long)v_7) - ((float)((int)p_13 + (int)((signed char)v)) - - p_11[1]));
  result = (long long)((int)(- (((float)p + p_4) * v)) | ((int)v_7 >> (
                                                          (p_9[1][1] / (
                                                           (unsigned long long)p_11[1] + 406ULL) - (unsigned long long)(
                                                           57328 - (int)p_13)) & 15ULL)));
  return result;
}


