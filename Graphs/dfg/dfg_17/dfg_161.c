#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 448656590
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, unsigned int p_9[4][5][2], float p_11[2])
{
  double v_7;
  char v_5;
  unsigned long long v;
  unsigned char result;
  v_7 = (double)p_11[0];
  v = (unsigned long long)p_11[1];
  v_5 = (char)p_9[0][4][1];
  v = v % (unsigned long long)((int)(- (! v_5)) + 814) + (unsigned long long)(
      (double)v_5 + (double)(63323 % ((int)p + 408)) * v_7);
  result = (unsigned char)(- ((double)((unsigned long long)p * v + (unsigned long long)(
                                       47 & (int)p)) + - (-2.03195799578e+38 - (double)v_5)));
  return result;
}


