#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 783722225
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p)
{
  signed char v_11;
  signed char v_9;
  long long v_6;
  unsigned long long v_4;
  unsigned char v;
  int result;
  v_9 = (signed char)-14;
  v_6 = (long long)p;
  v_4 = 779136468ULL;
  v = (unsigned char)104;
  result = (int)p;
  v_11 = (signed char)((unsigned long long)((int)(~ p) >> ((int)v * -49 & 7)) / (
                       ((unsigned long long)p ^ v_4) + 611ULL));
  if (~ ((unsigned long)result * 328310901UL + (unsigned long)((int)v_9 - (int)v_9)) < (unsigned long)(
      (int)v_11 + ~ (93 + (int)v_11))) {
    v = (unsigned char)(~ (~ v_4) - (unsigned long long)v_6);
    result = ! ((int)((signed char)(-80.6704483032f * (float)v)));
    result = - (! (- result));
  }
  else result = (int)p;
  return result;
}


