#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 375132372
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p)
{
  double v_5;
  unsigned short v;
  short result;
  v_5 = (double)p;
  v = (unsigned short)(v_5 * (double)((int)((unsigned short)v_5) % 31545));
  result = (short)(! (~ ((long long)p + 1010100144LL) % (long long)((
                                                                    0 ^ 
                                                                    1051275953 * (int)v) + 16)));
  return result;
}


