#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 458313834
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, double p_7, long long p_11[5][4],
                       char p_15[2], short p_17[5])
{
  double v_13;
  short v_9;
  unsigned short v_5;
  long long v;
  unsigned long long result;
  v_9 = (short)29691;
  result = 18446744073709528373ULL;
  v_13 = (double)(char)-43;
  v = ((long long)((int)((char)-1.34433882848e+38) * (int)p_15[0]) & 
       (p_11[3][1] | (long long)p_7) * p_11[0][0]) - (long long)(- p_17[3]);
  v_5 = (unsigned short)(213 % ((int)((unsigned char)v_13) + 23));
  result = (result * (unsigned long long)v & (unsigned long long)((int)p / (
                                                                  (int)v_5 % (
                                                                  (int)((unsigned short)p_7) + 347) + 720))) & (unsigned long long)(~ (
           (long long)(-1759 - (int)v_9) + p_11[4][3] / 48LL));
  return result;
}


