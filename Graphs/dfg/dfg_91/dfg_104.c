#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1060964822
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, short p_7[4][2][4], signed char p_9, int p_15)
{
  signed char v_13;
  unsigned long long v_11;
  long long v_4;
  double v;
  short result;
  v_13 = (signed char)117;
  v_11 = (unsigned long long)((unsigned long)(- (- ((float)p_15 * -2153654528.f))) + 4294921425UL);
  v = (double)v_13;
  v_4 = (long long)(~ (((int)p % 61079 >> ((int)(- p_7[1][0][0]) & 31)) - 
                       (35471 | (int)((unsigned short)v)) * ((int)p_9 << (
                                                             v_11 & 7ULL))));
  result = (short)((v * 0. - (double)(-51977LL * (long long)((double)v_4 + v))) / (
                   (double)((-41787LL / (v_4 + 397LL)) * (long long)p) + 384.));
  return result;
}


