#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 157250397
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, unsigned long p_4)
{
  signed char v_13;
  int v_11;
  unsigned short v_9;
  short v_7;
  unsigned short v;
  short result;
  v_13 = (signed char)43;
  v_7 = (short)-2983;
  v = p;
  result = (short)-31879;
  v_9 = (unsigned short)((0 % ((int)((unsigned short)1.22905225482e+42) + 672) - 
                          (int)result * (int)v_7) / 739240258);
  v_11 = (int)p_4;
  result = (short)(- ((int)v / ((int)v_7 + 549)) % (((int)v_9 / (v_11 + 1023)) % (
                                                    (int)(~ v_13) + 135) + 728) - (
                   -3 & (int)(- p)));
  result = (short)(! (- ((unsigned long)((int)p << ((int)result & 15)) ^ ! p_4)));
  return result;
}


