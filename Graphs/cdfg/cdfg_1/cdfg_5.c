#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 741294118
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, unsigned long p_5, signed char p_7,
                  unsigned short p_11, unsigned short p_13)
{
  int v_23;
  long v_21;
  unsigned short v_19;
  unsigned long v_17;
  unsigned int v_15;
  signed char v_9;
  unsigned long long v;
  unsigned long result;
  v_23 = 19028;
  v_21 = (long)p_7;
  v_19 = (unsigned short)p;
  v_15 = 39620U;
  v_9 = (signed char)51;
  result = 3592230906UL;
  if ((unsigned long)(-25 & - v_23) / (((unsigned long)(~ p_13) - p_5 * (unsigned long)v_21) + 847UL) <= result) {
    v_9 = (signed char)p_13;
    v = (unsigned long long)((long long)((int)p_7 * (int)(! v_9)) + (long long)(
                                                                    (int)p_11 + (int)p_13) / 48120LL);
  }
  else {
    v_21 = (long)p_13;
    v_17 = ((unsigned long)((int)v_19 ^ (int)p_11) + - p_5) - (unsigned long)v_21;
    v = (unsigned long long)((unsigned long)(-840848911 * (int)(~ v_9)) / (
                             (unsigned long)v_15 / (~ v_17 + 699UL) + 751UL));
  }
  result = (unsigned long)((v - (unsigned long long)((int)p % ((int)p + 173))) + (unsigned long long)p_5);
  return result;
}


