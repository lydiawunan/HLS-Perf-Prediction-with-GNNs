#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 274772260
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, unsigned short p_4, unsigned long p_9, short p_11,
         unsigned long long p_13)
{
  double v_17;
  double v_15;
  unsigned long v_7;
  short v;
  char result;
  v_17 = (double)p;
  v_15 = (double)p_4;
  v = p_11;
  v = (short)((int)v - (int)((short)((double)((unsigned long)(- p) + (
                                              p_9 - (unsigned long)p)) + 
                                     (v_15 - (double)v) * (double)((int)((char)v_17) >> 4))));
  result = (char)(- ((unsigned long long)((int)p_4 * (int)p_11) | (p_13 + (unsigned long long)v)));
  v_7 = p_9;
  result = (char)((unsigned long)result % (((unsigned long)((int)p / (
                                                            (int)(- p_4) + 134)) - (
                                            (unsigned long)(! v) + v_7)) + 1019UL));
  return result;
}


