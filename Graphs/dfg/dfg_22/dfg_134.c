#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 774543052
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, short p_9, unsigned int p_13)
{
  unsigned long v_15;
  short v_11;
  unsigned long v_7;
  long v_5;
  unsigned int v;
  double result;
  v_15 = 664404210UL;
  v_11 = (short)-32665;
  v_5 = -1060245250L;
  v_7 = (unsigned long)(! ((int)(~ p_9) * (int)(- v_11))) | (((unsigned long)p_13 % 26990UL) % 39979UL - (
                                                             ! v_15 - (unsigned long)v_11));
  v = (unsigned int)(! v_7);
  result = (double)(- ((unsigned long)v % (unsigned long)((240L ^ ((long)p - v_5)) + 192L)));
  result = (double)(! (25809 / ((int)((unsigned short)(- result)) + 964)));
  return result;
}


