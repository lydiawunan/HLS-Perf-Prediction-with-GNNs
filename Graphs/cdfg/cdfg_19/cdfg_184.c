#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 879460288
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p[1][4][4], float p_13, signed char p_19)
{
  short v_17;
  char v_15;
  unsigned int v_11;
  int v_9;
  unsigned short v_7;
  double v_5;
  double v;
  short result;
  v_17 = (short)23986;
  v_15 = (char)p_19;
  v_11 = (unsigned int)p[0][3][3];
  v_7 = (unsigned short)2430;
  v = -1.36855134699e+38;
  result = (short)-15640;
  v_5 = (double)p_13;
  if ((int)(- (- v) + (double)((int)(- v_7) - 37521)) < (- ((int)p[0][0][0] + (int)((unsigned short)p_13)) | (int)(- (- v_5)))) 
    result = (short)140;
  else {
    v_9 = (int)((long long)(((int)v_17 ^ (int)p[0][1][2]) ^ (int)result) + (
                (long long)(v_11 - (unsigned int)p_13) | (long long)p_19 % 57681LL));
    v = (v_5 - (double)(11548 / ((int)v_7 + 251))) - (double)((float)(
                                                              (unsigned int)v_9 + v_11) + (
                                                              p_13 + (float)v_15));
    result = (short)((double)(455388482 / (((int)((unsigned short)v) - (int)p[0][0][2]) + 408)) * 1.84467440819e+19);
  }
  return result;
}


