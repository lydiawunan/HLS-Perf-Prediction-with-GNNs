#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 641368126
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p, long p_4[4], unsigned char p_7,
                  unsigned char p_9, int p_15[5][5][4])
{
  unsigned short v_17;
  long long v_13;
  signed char v_11;
  double v;
  unsigned char result;
  v_17 = (unsigned short)p_15[0][2][0];
  v_13 = (long long)((56 >> (p_15[4][4][1] & 7)) * ~ ((56 & (int)v_17) + (
                                                      (int)v_17 + (int)p_7)));
  v_11 = (signed char)(~ (- (~ v_13)) % (long long)(- p_15[1][0][1] + 907));
  v = (double)((5857L * (p_4[2] & (long)p_7) - (long)(~ ((int)p_9 - 127))) * (long)v_11);
  result = (unsigned char)(! (p + (long long)(! (p_4[2] / ((long)v + 72L)))));
  return result;
}


