#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 225375923
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, int p_9, unsigned short p_13)
{
  char v_11;
  long long v_6;
  unsigned short v_4;
  unsigned char v;
  short result;
  v_11 = (char)p;
  v_4 = (unsigned short)(- (((unsigned int)(p_9 - (int)v_11) % (p + 564U)) / (unsigned int)(
                            (int)p_13 + 328)));
  v_6 = -364008649LL;
  v = (unsigned char)(91 >> (((long long)-2.19856179112e+38 + (long long)(
                                                              (long)v_4 ^ -159907403L) * (
                                                              v_6 - (long long)p)) & 7LL));
  result = (short)(~ ((long)v));
  return result;
}


