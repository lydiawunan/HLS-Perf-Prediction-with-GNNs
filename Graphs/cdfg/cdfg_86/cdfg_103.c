#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 445821867
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, long p_9, long long p_13)
{
  int v_17;
  unsigned long v_15;
  unsigned int v_11;
  unsigned long v_6;
  char v_4;
  long long v;
  unsigned char result;
  v_15 = (unsigned long)p_13;
  v_11 = 329264546U;
  v_6 = 4100116501UL;
  v_4 = (char)p_13;
  v = -245125006LL;
  result = (unsigned char)p_9;
  while (4294967295LL >= 0LL / (((long long)p + p_13) / (long long)(v_11 + 903U) + 483LL)) {
    v_17 = v_15 * 4294966433UL;
    v_4 = (char)((long)(-88 - 24767 * v_17) * p_9);
    v = -30262LL;
    v_11 = (unsigned int)((21705LL - (long long)p * v) - (long long)(! (
                          (int)((signed char)-1.21323961381e+37f) % -119)));
  }
  while_0_break: ;
  while (~ (-72LL | ((long long)result - v)) >= -16088LL) {
    v_4 = (long long)v_6 | ((long long)v_4 - -209629834LL);
    v_6 = (unsigned long)p_9;
    v = (long long)(-0);
    result = (unsigned char)(~ p);
  }
  while_0_break_0: ;
  return result;
}


