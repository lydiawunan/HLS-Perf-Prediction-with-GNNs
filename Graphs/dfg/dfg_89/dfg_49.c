#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 330198229
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, short p_7, unsigned long long p_9, long long p_13[2][3])
{
  double v_11;
  unsigned int v_5;
  unsigned short v;
  int result;
  v_11 = (double)p;
  result = (int)((v_11 - (double)p_13[0][2]) / 1.84467440737e+19);
  v_5 = (unsigned int)p_9;
  v = (unsigned short)((unsigned int)p * (((unsigned int)(-524 ^ result) - 
                                           (unsigned int)p % (v_5 + 226U)) ^ (unsigned int)(! (
                                          (int)p_7 * (int)p_7))));
  result = (int)(- (! v));
  return result;
}


