#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 184660279
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, unsigned char p_5[4][5][4])
{
  short v_13;
  unsigned short v_11;
  unsigned short v_9;
  unsigned short v_7;
  double v;
  unsigned long result;
  v_13 = (short)p;
  v_11 = (unsigned short)p;
  v_9 = (unsigned short)54564;
  v_7 = (unsigned short)p;
  v = (double)p_5[1][1][0];
  result = (unsigned long)p_5[0][1][1];
  v = (double)((unsigned long)p_5[2][0][3] % ((p + (unsigned long)((double)(
                                                                   (int)v_13 % (
                                                                   (int)p_5[2][3][1] + 687)) + - v)) + 303UL));
  v = (double)((float)((unsigned int)((int)(! p_5[3][1][1]) - (int)p_5[0][0][0]) * ~ (
                       (unsigned int)v_11 % 54325U)) - ((float)(- ((int)((unsigned char)v) % (
                                                                   (int)p_5[2][2][1] + 883))) - (
                                                        (float)((int)v_13 * 964) - -222.314926147f)));
  result = - (result - (unsigned long)((int)v_7 + (int)((unsigned short)4.13907915955e+37))) / (unsigned long)(
           (int)v_9 + 465);
  result = (unsigned long)((long long)((double)p * (13. + v)) - -66LL * (
                                                                936868610LL / (long long)(
                                                                result + 368UL) | (long long)(
                                                                -683577280.f * (float)p_5[0][3][0])));
  return result;
}


