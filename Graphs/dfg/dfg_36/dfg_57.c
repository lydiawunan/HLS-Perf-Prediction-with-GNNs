#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 340333966
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p)
{
  short v_15;
  short v_12;
  long v_10;
  int v_8;
  char v_6;
  unsigned char v_4;
  long long v;
  long result;
  v_15 = (short)p;
  v_8 = (int)p;
  v_6 = (char)-21;
  v_4 = (unsigned char)p;
  v = 471394318LL;
  result = 60756L;
  v_12 = (short)((int)v_15 % ((int)((short)(p * p)) + 595));
  v_15 = (short)(- (- p * (double)(~ result * (long)((int)v_6 + v_8))));
  v_10 = (long)v_4;
  result = (long)((double)(v | (long long)((long)((int)v_4 % ((int)v_6 + 815)) + (
                                           (long)v_8 ^ v_10))) - ((double)(! v_12) / (
                                                                  p * -1002349748. + 379.)) * (double)v_15);
  return result;
}


