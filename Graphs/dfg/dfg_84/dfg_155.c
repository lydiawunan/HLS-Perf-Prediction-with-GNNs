#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 288643593
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, float p_9, short p_11[4])
{
  signed char v_7;
  long long v_4;
  unsigned long v;
  unsigned int result;
  v_4 = 25454LL;
  v = (unsigned long)p_11[1];
  v_7 = (signed char)(- p_11[1]);
  v = ~ (~ ((unsigned long)(-24965 * (int)((short)p_9)) ^ (v + 4294967248UL)));
  v = ~ (- v % (unsigned long)((int)(- p) / ((int)((signed char)6.38539372096e+35) * (int)v_7 + 481) + 781));
  result = (unsigned int)(18446744073709534479ULL >> (((long long)(v - 17482UL) & v_4) & 63LL));
  return result;
}


