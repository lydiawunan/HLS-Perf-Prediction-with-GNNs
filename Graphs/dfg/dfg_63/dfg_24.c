#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 364670410
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p[2][5], int p_9, unsigned long p_15,
                  long long p_19[4][2][2])
{
  char v_17;
  unsigned short v_13;
  float v_11;
  unsigned char v_7;
  unsigned char v_5;
  float v;
  unsigned char result;
  v_17 = (char)-43;
  v_13 = (unsigned short)p_9;
  v_7 = (unsigned char)231;
  result = (unsigned char)21;
  v_11 = (float)(((unsigned long)(! v_13) - (60527UL - p_15)) * 261125252UL << (
                 ((int)(- v_17) >> ((int)((char)((float)p_19[3][0][0] * -2.86752869236e+38f)) & 7)) % (
                 17026 * (int)(~ result) + 560) & 31));
  v_5 = (unsigned char)v_11;
  v = (float)(- (! p_9) * (int)result);
  result = (unsigned char)(! (((int)((signed char)v) + (int)p[0][1]) / (
                              ((int)v_5 - (int)p[0][3]) + 661) - (33669 - (int)v_7)));
  return result;
}


