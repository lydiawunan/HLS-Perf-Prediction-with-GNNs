#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 604483759
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p[3], unsigned long long p_7, long long p_9)
{
  unsigned long long v_13;
  unsigned char v_11;
  signed char v_5;
  signed char v;
  signed char result;
  v_13 = p_7;
  v_11 = (unsigned char)(! (~ ((unsigned long long)(15896U * p[2]) * v_13)));
  v_5 = (signed char)v_13;
  v = (signed char)(- (- v_11));
  result = (signed char)((unsigned long long)((int)(- (! v)) & (int)((signed char)1.39273962333e+38f)) - (
                         (unsigned long long)(- (p[1] / (unsigned int)(
                                                 (int)v + 293))) + (unsigned long long)v_5 * (
                                                                   p_7 - (unsigned long long)p_9)));
  return result;
}


