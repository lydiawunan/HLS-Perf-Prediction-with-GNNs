#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 378139556
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, unsigned long long p_4, char p_11,
              unsigned char p_13, float p_23)
{
  int v_21;
  unsigned char v_19;
  unsigned char v_17;
  char v_15;
  unsigned int v_9;
  float v_7;
  unsigned int v;
  long long result;
  v_21 = 54565;
  v_19 = (unsigned char)172;
  v_17 = (unsigned char)20;
  v_15 = (char)-76;
  v_9 = 4294902028U;
  v_7 = -1.03352648687e+38f;
  while ((unsigned int)(- v_15) % 757561903U + 55348U >= 133U) {
    v_21 = (long)v_21 * ((long)v_19 - (long)v_17 / -59633L);
    v_17 = (unsigned char)(0 / (4294942963ULL * ((unsigned long long)p_23 + 18446744073709548165ULL) + 831ULL));
    v_19 = (unsigned char)v_7;
    v_15 = (char)(2523 ^ ((int)p_11 * (int)((char)v_7)) / ((int)(~ v_19) + 890));
  }
  while_0_break: ;
  if (((unsigned int)(-12646 * (int)((short)v_7)) + ((unsigned int)p + v_9)) / (unsigned int)(
      (int)(! (! p_11)) + 480) >= (unsigned int)p_13) result = (long long)(
                                                      (-2.04718106849e+38 + (double)(
                                                       (int)p << 6)) / (
                                                      (double)(~ p_4) + 31.));
  else {
    v = (unsigned int)(! 414507768L);
    result = -339876668LL;
    result = (long long)v / (result + 462LL);
  }
  return result;
}


