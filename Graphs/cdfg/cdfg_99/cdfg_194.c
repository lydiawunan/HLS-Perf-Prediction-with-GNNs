#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 619963098
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, unsigned int p_4, int p_6, char p_8, double p_11[2])
{
  float v_17;
  short v_15;
  unsigned long v_13;
  float v;
  signed char result;
  v_17 = (float)p;
  v_15 = (short)-11710;
  v = (float)p_6;
  v_13 = (unsigned long)(~ ((unsigned int)((int)((short)3.27164652514e+38) - (int)v_15) * (
                            p_4 + 34865U)));
  if (- ((double)v - (p_11[1] - (double)v_13)) < (double)((float)((int)(~ v_15) % -18) - 
                                                          (float)(! p_6) / (
                                                          - v_17 + 1018.f))) 
    result = (signed char)7081924096.f;
  else {
    result = (signed char)(~ ((unsigned long)p + (unsigned long)p_4));
    result = ~ (! (- result));
    result = result;
  }
  return result;
}


