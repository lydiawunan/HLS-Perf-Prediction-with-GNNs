#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 446298526
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, unsigned char p_4[3][1][1], unsigned long p_6)
{
  unsigned long v;
  short result;
  v = 4294950613UL;
  result = (short)-15745;
  v = - (! v);
  result = (short)(- ((unsigned long)((int)result / -15224 - (int)(p + (float)p_6)) + v));
  result = (short)(289061440 + ! ((int)(p / ((float)result + 542.f)) - 
                                  (int)((unsigned char)-1.57984556181e+38f) / (
                                  (int)p_4[0][0][0] + 1001)));
  return result;
}


