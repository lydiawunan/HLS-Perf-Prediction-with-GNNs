#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 213498102
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, unsigned int p_9[5][3][3],
                  int p_11[3][4][3], signed char p_13, short p_15)
{
  long long v_21;
  float v_19;
  long v_17;
  unsigned short v_7;
  unsigned short v_5;
  unsigned char v;
  unsigned long result;
  v_21 = 511164112LL;
  v_19 = -844.656921387f;
  v_17 = (long)p_15;
  v_7 = (unsigned short)p_15;
  v_5 = (unsigned short)p_11[1][2][0];
  result = (unsigned long)p_11[0][0][2];
  v_21 = (long long)((33250 | p_11[2][2][1]) / (p_11[2][1][0] + 983) & (int)(
                     (double)(p_11[0][0][2] ^ 319956713) * (-2.43125894872e+38 * (double)v_21)));
  if ((long long)((float)v_17 * ((float)((int)v_5 / 31917) - v_19)) <= ~ (
      (v_21 + (long long)p_9[3][0][0]) % (long long)(p_11[0][2][2] / (
                                                     p_11[1][1][1] + 1006) + 462))) 
    result = 3945779529UL;
  else {
    v_5 = (unsigned short)((unsigned long)((int)v_7 % ((int)p + 480)) % (
                           result + 716UL));
    v = (unsigned char)((34566UL / (unsigned long)(((unsigned int)v_7 - p_9[2][2][1]) + 898U)) / (
                        (unsigned long)((unsigned int)p_11[2][0][0] - 14186U) / (
                        result + 676UL) + 337UL));
    result = (unsigned long)(! ((int)p % ((int)v + 503))) / ((result + (unsigned long)v_5) / 4294959966UL + 886UL);
  }
  return result;
}


