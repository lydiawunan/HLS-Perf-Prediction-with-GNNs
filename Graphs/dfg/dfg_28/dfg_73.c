#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 937252812
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, char p_7, unsigned long p_11[1][1], unsigned int p_13)
{
  short v_9;
  char v_5;
  unsigned short v;
  short result;
  v_9 = (short)p_7;
  v = (unsigned short)49562;
  v_9 = (short)(4151 % (~ (- ((int)v_9 / -8)) + 115));
  v_5 = (char)(! (- p_13) / 43U);
  v = (unsigned short)((unsigned long)((int)(~ (! v_5)) / (((int)v + (
                                                            (int)p_7 - (int)v_9)) + 952)) % (
                       p_11[0][0] + 197UL));
  result = (short)(- (p + ((long)v - p)));
  return result;
}


