#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 679994737
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, long long p_5, short p_9[5][1], unsigned short p_11[4][1],
          unsigned long p_17[5][1])
{
  unsigned char v_15;
  long v_13;
  char v_7;
  long v;
  short result;
  v_15 = (unsigned char)244;
  v_13 = (long)p_9[4][0];
  v_7 = (char)(((long)((int)p_9[1][0] + (int)p_11[1][0]) * v_13 + (long)v_15) << (
               ((unsigned long)p_11[3][0] % (p_17[2][0] * 90UL + 906UL)) / (unsigned long)(
               (int)p_9[3][0] + 821) & 31UL));
  v = (long)(55641U & ((unsigned int)(- (- v_7)) + ((unsigned int)-1549077939.71 & 8981U)));
  result = (short)-1.90848627124e+38;
  result = (short)((long long)((unsigned long)(- ((long)result * v)) | 2154UL) % (
                   ((long long)((int)((short)-2.4005402061e+38f) >> (
                                (int)p & 15)) - ~ p_5) / 11608LL + 821LL));
  return result;
}


