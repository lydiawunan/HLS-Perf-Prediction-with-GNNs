#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 342007702
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p[4][2][1], unsigned long p_13)
{
  unsigned long v_11;
  double v_8;
  unsigned long v_6;
  unsigned short v_4;
  signed char v;
  unsigned char result;
  v_11 = 50312UL;
  v_8 = (double)p_13;
  v_6 = (unsigned long)p[3][0][0];
  v_4 = (unsigned short)p_13;
  v = (signed char)-77;
  result = (unsigned char)(- (- (v_8 * 2523.)) * -1.93671915217e+38);
  v_8 = (double)(((unsigned long)(-18750 + p[0][0][0]) * (18925UL ^ v_11) - (unsigned long)p[3][1][0]) % (
                 ((p_13 + 4211362297UL) / (unsigned long)(((int)((unsigned char)2.91640260631e+38f) + (int)result) + 605) - - (
                  p_13 % 4294967174UL)) + 110UL));
  result = (unsigned char)(~ (229487137LL % (long long)(~ ((int)v_8 + 639328916) + 685)));
  result = (unsigned char)(8871UL / ((unsigned long)(~ ((int)result * 1103)) / (
                                     (unsigned long)((int)v % ((int)v_4 + 527)) % (
                                     v_6 + 380UL) + 125UL) + 870UL));
  return result;
}


