#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 92749771
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, unsigned int p_13, long long p_15, short p_17)
{
  long v_23;
  long v_21;
  int v_19;
  char v_10;
  unsigned char v_8;
  long long v_6;
  unsigned int v_4;
  long v;
  signed char result;
  v_23 = (long)p_17;
  v_21 = -407844174L;
  v_19 = (int)p;
  v_10 = (char)p;
  v_8 = (unsigned char)173;
  v_6 = 204350815LL;
  v_4 = 40854U;
  v = (long)p_15;
  result = (signed char)70;
  while (32333UL >= ((unsigned long)(p_13 - 22970U) ^ (unsigned long)v_21) * (unsigned long)(~ (
                    (int)v_10 + v_19))) {
    v_8 = v_23 | -619407019L;
    v_4 = 4294967210U;
    v_19 = (int)(- (-(unsigned char)245));
    v_21 = (long)2.03139906399e+38;
  }
  while_0_break: ;
  while ((long long)((unsigned long)v * (unsigned long)v_4 << 27UL) % (
         ! v_6 * (long long)((int)v_8 % ((int)v_10 + 820)) + 447LL) == 
         ((long long)(p + (double)p_13) - p_15 * (long long)p_17) / (long long)(
         v_19 + 190)) {
    v_19 = (unsigned long)v_21 ^ 4294944250UL;
    v_21 = 45040L;
    v_6 = (long long)p_13;
    v = (long)(v_6 % (((long long)result + v_6) + 423LL) + 58797LL);
  }
  while_0_break_0: ;
  return result;
}


