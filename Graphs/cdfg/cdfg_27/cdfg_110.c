#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 848260187
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, unsigned long long p_5, float p_7)
{
  float v_13;
  float v_11;
  unsigned int v_9;
  long v;
  int result;
  v_13 = (float)p;
  v_11 = p_7;
  v_9 = (unsigned int)p_7;
  result = (int)p_5;
  v_9 = (unsigned int)result - (v_9 << ((unsigned int)v_13 & 31U)) % (
                               ((unsigned int)result + 3221279859U) + 650U);
  if (v_9 == (unsigned int)(- v_11)) result = (int)1.52950583812e+38f;
  else {
    v = (long)(- ((unsigned long long)(-251.270110903 - (double)p) + 
                  p_5 * 21153ULL));
    result = (int)(! (-35155L + v / -676586837L));
  }
  return result;
}


