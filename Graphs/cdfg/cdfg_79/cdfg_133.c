#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 954087097
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, signed char p_11[2][2])
{
  float v_13;
  unsigned int v_9;
  long v_7;
  char v_5;
  unsigned int v;
  unsigned char result;
  v_13 = 1.50440483505e+38f;
  v_9 = 4294926793U;
  v_7 = 502962548L;
  v_5 = (char)p;
  v = (unsigned int)p;
  if ((double)(! ((long)p - (long)p % -235903176L)) > 41835. / ((7117454252.99 - (double)(
                                                                 v_13 + -120.f)) + 594.)) {
    result = (unsigned char)(18446744072770896033ULL / (unsigned long long)(
                             (int)v_5 / (27 * (int)p_11[0][1] + 500) + 437));
    v = v_9;
    v_5 = (char)((int)p / ((int)((signed char)(530.176391602f * (float)(
                                               v - 23U))) + 261));
  }
  else {
    v_9 = ~ (! (~ v));
    v_7 = (long)((long long)p + 57492LL);
    result = (unsigned char)v_9;
  }
  while ((unsigned int)(~ p) != (unsigned int)(! result) % (v + 886U)) {
    result = (unsigned char)((long long)((unsigned int)v_5 & 3435739640U) % (
                             ((long long)p * 905195114LL) * (long long)(! v_5) + 629LL));
    result = ! (~ (- result));
    v = (unsigned int)v_7;
  }
  while_0_break: ;
  return result;
}


