#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1020314590
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, int p_11, signed char p_13,
              unsigned long long p_15[4], unsigned int p_17[5][5][4])
{
  float v_19;
  unsigned short v_9;
  short v_7;
  float v_4;
  unsigned char v;
  long long result;
  v_19 = -7.88494696446e+37f;
  v_7 = (short)31756;
  v_4 = (float)p;
  v = (unsigned char)p_13;
  result = (long long)p_15[2];
  if ((int)v_4 <= (int)v / (- p_11 + 54)) {
    v_7 = (short)(- v_19);
    v_9 = (unsigned short)((40544 + (145 + p_11)) & ((int)(- v_4) + 15529 / (
                                                                    p_11 + 997)));
    v_4 = (float)(! (- (p_17[3][1][1] * (unsigned int)-271.826416016f)));
  }
  else {
    result = (long long)((unsigned long long)(- v_19) * - ((unsigned long long)p_13 / (
                                                           p_15[0] + 423ULL)));
    v_9 = (unsigned short)((unsigned long)1.60999394282e+38 * 380614481UL);
    v_4 = (float)p_11;
  }
  while (((float)v * -2603005440.f - v_4) * ((float)(p / (p + 291U)) + v_4) <= (float)p) {
    v_7 = (unsigned long)v_7 | 1032975474UL;
    v = (unsigned char)((int)v_9 % 901);
    result = (long long)(- (616ULL / ((unsigned long long)p_13 * p_15[2] + 1012ULL)));
    v_4 = (float)((long long)(! (- v)) + ((long long)p_11 % (result + 788LL) ^ (long long)p));
  }
  while_0_break: ;
  return result;
}


