#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 736325731
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, float p_4, unsigned short p_7[2], signed char p_9,
              char p_13)
{
  long v_19;
  signed char v_17;
  signed char v_15;
  char v_11;
  long long v;
  long long result;
  v_19 = (long)p_7[0];
  v_15 = (signed char)p_4;
  v_11 = (char)p_9;
  result = -426535382LL;
  v_17 = (signed char)(~ (- (~ v_19) + (long)(- (2426.f / (p_4 + 919.f)))));
  v = (long long)((unsigned long)(! p_9) % ((3937147710UL ^ (unsigned long)(
                                             p * (int)p_13)) * (unsigned long)(~ (
                                            (int)v_15 ^ (int)v_17)) + 537UL));
  result = (long long)(0UL % (! (4294936838UL & (unsigned long)p) + 925UL));
  result = ((long long)(~ p - -22 / ((int)((signed char)p_4) + 828)) + 
            ! v % (((long long)p_7[0] + result) + 110LL)) + (long long)(~ (
           ((int)p_9 + (int)v_11) * (int)p_9));
  return result;
}


