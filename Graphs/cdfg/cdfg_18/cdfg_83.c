#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 440401825
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, unsigned int p_7, unsigned char p_9, unsigned long p_13,
           unsigned long long p_17)
{
  unsigned int v_25;
  int v_23;
  unsigned long long v_21;
  float v_19;
  unsigned char v_15;
  long v_11;
  unsigned char v_5;
  short v;
  double result;
  v_25 = p_7;
  v_23 = (int)p_17;
  v_21 = (unsigned long long)p_13;
  v_19 = (float)p;
  v_15 = (unsigned char)p_13;
  v_5 = (unsigned char)p_17;
  result = -612.989758658;
  while (- (v_19 + (float)p_13) * (float)((long)p - (-14148L << (p_13 & 31UL))) > (float)(
         (unsigned long long)(((long long)p_7 & 446396477LL) + (long long)p_9 * 501085070LL) / (
         v_21 + 313ULL))) {
    v_5 = v_23 + 8853;
    v_23 = 0;
    v_15 = (unsigned char)(! ((int)p_9 >> (40034UL % (unsigned long)(
                                           p_7 + 564U) & 7UL)));
    v_19 = (float)(! 389595789UL);
  }
  while_0_break: ;
  if ((unsigned long long)result >= (unsigned long long)-4771908096.f / (
                                    ~ (! p_17) + 685ULL)) {
    result = (double)((unsigned long long)result * ((unsigned long long)(
                                                    (unsigned int)v_5 * 27530U) * (
                                                    314625305ULL / (unsigned long long)(
                                                    p_7 + 247U))));
    v = (short)(- (63636. - result) + (double)p);
    result = (double)((int)p + (int)p / ((int)v + 31));
  }
  else {
    v_11 = (long)(p_13 % (~ (p_13 - (unsigned long)v_15) + 403UL));
    v_5 = (unsigned char)((unsigned long)((long)(22 >> ((int)p_9 & 7)) * (
                                          v_11 + (long)p)) / (unsigned long)(
                          ~ p_7 + 698U));
    result = (double)(~ v_5);
  }
  return result;
}


