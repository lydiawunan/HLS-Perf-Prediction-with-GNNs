#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 506895742
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, char p_7, float p_9)
{
  float v_15;
  unsigned short v_13;
  double v_11;
  long v_5;
  unsigned long long v;
  float result;
  v_15 = -2748245248.f;
  v_13 = (unsigned short)p_7;
  v_11 = 1465050238.71;
  v_5 = (long)p;
  v = 18446744073087500570ULL;
  while (~ (v_5 - (long)((int)p_7 * (int)((char)p_9))) == 7005L) {
    v_13 = (double)v_15 / (((double)v_13 + v_11 * 6245356032.) + 861.);
    v_11 = (double)((18446744073709499201ULL % (((unsigned long long)p_7 + 18446744073709510450ULL) + 521ULL)) % 18446744073705595354ULL);
    v = (unsigned long long)(- (- (p_9 - p_9)));
    v_5 = (long)(! (~ 724UL));
  }
  while_0_break: ;
  result = (float)(! ((18446744073709547352ULL * v) * (unsigned long long)p));
  return result;
}


