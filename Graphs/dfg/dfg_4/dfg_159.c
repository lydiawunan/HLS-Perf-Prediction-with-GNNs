//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 831073907
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, char p_9)
{
  long long v_11;
  short v_7;
  char v_4;
  long v;
  unsigned long long result;
  v_11 = (long long)p;
  v_7 = (short)-5674;
  v_4 = (char)-77;
  v = -30278L;
  result = (unsigned long long)((long)(p - - p * -2.72530498821e+38f) % (
                                ! ((long)(! v_4) + - v) + 917L));
  v = (long)((result + (unsigned long long)((long long)(! p_9) + v_11)) & (unsigned long long)v);
  v = ! ((long)v_7 * -260711843L - (long)(p - (float)v)) + (long)p_9;
  result = - (~ result) * (unsigned long long)(- ((float)(v % (long)(
                                                          (int)v_4 + 549)) - p));
  return result;
}


