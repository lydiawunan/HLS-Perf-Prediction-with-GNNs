#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 486873540
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, unsigned long long p_5, double p_7,
                unsigned long p_11, unsigned int p_15)
{
  unsigned long v_21;
  unsigned char v_19;
  char v_17;
  unsigned int v_13;
  char v_9;
  float v;
  signed char result;
  v_21 = 4294938593UL;
  v_19 = (unsigned char)p_7;
  v_17 = (char)p;
  v_13 = (unsigned int)p_7;
  v = (float)p_11;
  if ((unsigned long)(((int)(! p) & (int)(~ v_17)) - (int)p) < 0UL - (
                                                               (unsigned long)(
                                                               -50740 - (int)v_19) + (
                                                               (unsigned long)v & v_21))) {
    v_9 = (char)(~ ((long long)(- p_11)));
    v = (float)((long)v_9 * -33895L);
  }
  else {
    v_13 = v_13;
    result = (signed char)(~ (~ (58902 / ((int)p + 803))));
    v = (float)((unsigned long)result * ((unsigned long)(v_13 % (p_15 + 340U)) + 
                                         790824679UL / (p_11 + 602UL)));
  }
  result = (signed char)(((v - (float)p) - (float)(p_5 / 18446744073709524558ULL)) + (float)(! (
                         (int)((short)p_7) / 17204)));
  return result;
}


