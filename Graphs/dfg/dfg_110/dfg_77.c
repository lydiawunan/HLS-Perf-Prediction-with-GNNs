#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 536809439
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, signed char p_9[1], unsigned long p_11, int p_17)
{
  double v_15;
  char v_13;
  short v_6;
  unsigned char v_4;
  signed char v;
  char result;
  v_15 = 773.490854527;
  v_13 = (char)-54;
  v = (signed char)36;
  v_13 = (char)(- ((p / (v_15 + 195.) - v_15) - (double)((unsigned long)(
                                                         (int)v_13 | p_17) - p_11)));
  v_4 = (unsigned char)(- (p - (double)((int)p_9[0] << (p_11 & 7UL))) + (double)(- (
                        (int)(- v_13) * 12975)));
  v_6 = (short)v;
  result = (char)(! (-517581680L | (long)(((int)v + (int)v_4) / ((int)v_6 + 128))));
  return result;
}


