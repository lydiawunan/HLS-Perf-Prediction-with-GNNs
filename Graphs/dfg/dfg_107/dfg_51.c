#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 131939674
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, signed char p_4,
                   unsigned long p_6[5][1][3], unsigned short p_9,
                   long long p_13)
{
  long long v_17;
  long v_15;
  short v_11;
  long long v;
  unsigned short result;
  v_17 = -54795LL;
  v = p_13;
  result = (unsigned short)30481;
  v_15 = (long)(! v_17 * (long long)p_4);
  v_11 = (short)((long long)(~ (~ v_15 & (long)(-69 % ((int)result + 349)))) * (
                 (long long)(! (- p)) + (v - -99LL)));
  result = (unsigned short)((((long long)((unsigned long)p_4 - p_6[1][0][0]) + 
                              v % (long long)((int)p_9 + 917)) * (long long)v_11) % (
                            p_13 + 636LL));
  result = (unsigned short)((unsigned long)((193 + (int)result * 111) - (int)result) + p);
  return result;
}


