#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 306277746
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, unsigned short p_9, char p_11, unsigned short p_15)
{
  long long v_13;
  unsigned int v_7;
  long long v_5;
  float v;
  short result;
  v_13 = -66021640LL;
  v = (float)p_11;
  v_7 = (unsigned int)(- ((v_13 / ((long long)v + 106LL)) * (long long)(! (
                          61852 % ((int)p_15 + 821)))));
  v_5 = ((long long)(v_7 ^ (unsigned int)(! p_9)) % 20146LL) / (long long)(
        (int)p_11 + 98);
  v = (float)v_5;
  result = (short)(~ (p * (unsigned long)((int)v * 311860272)));
  return result;
}


