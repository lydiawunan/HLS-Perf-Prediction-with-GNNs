#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 560835783
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, char p_4, unsigned char p_6[2][3], unsigned char p_13,
          signed char p_15)
{
  double v_11;
  short v_9;
  unsigned short v;
  short result;
  v_11 = 5076063435.23;
  v_9 = (short)-8642;
  v = (unsigned short)2352;
  v_11 = (double)((int)p_13 % ((int)((unsigned char)((34. / (- v_11 + 99.)) * (double)p_15)) + 480));
  v_9 = (short)(((int)p_6[0][0] % ((int)(~ v_9) + 434)) / (! (((int)((char)v_11) / -48) * (
                                                              (int)p_13 / 42325)) + 5));
  v_9 = (short)((int)v_9 + 193);
  result = (short)((~ (p | (long)p_4) - (long)((int)p_6[1][0] + (int)p_6[0][0])) + (long)(
                   483 + (int)(! v) * (int)((unsigned short)(-9396265295.16 * (double)v_9))));
  return result;
}


