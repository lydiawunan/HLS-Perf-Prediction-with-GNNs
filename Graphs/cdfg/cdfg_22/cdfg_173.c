#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 684942652
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, long long p_4, int p_7, long p_9,
                       long long p_11)
{
  char v_23;
  long v_21;
  unsigned char v_19;
  unsigned char v_17;
  unsigned long v_15;
  signed char v_13;
  unsigned long v;
  unsigned long long result;
  v_23 = (char)p;
  v_21 = 48324L;
  v_19 = (unsigned char)39;
  v_13 = (signed char)p_7;
  result = 831421949ULL;
  if ((! p_4 + (long long)(! v_23)) % (long long)(48494 * (int)(~ v_23) + 958) >= p_11) {
    v_13 = (signed char)(~ (~ result) + (unsigned long long)v_19);
    v_17 = - (- v_19);
    v_15 = (unsigned long)(0LL / (p_4 + 496LL) | 743185612LL);
  }
  else {
    v_21 = (long)((long long)(19396L / (v_21 * 21L + 538L)) + 2998LL);
    v_15 = (unsigned long)p_7;
    v_17 = (unsigned char)((double)(! v_15 % (unsigned long)(v_21 + 712L)) + 955.503355406);
  }
  if ((unsigned long long)p_11 % ((((unsigned long long)p_7 - result) + 237ULL) + 662ULL) < (unsigned long long)(
      (unsigned long)(((int)v_13 * 111) % ((int)p % (p_7 + 824) + 561)) / (
      ~ (v_15 - (unsigned long)v_17) + 843UL))) result = (unsigned long long)(- (
                                                -886738035L - (long)(! p)));
  else {
    result = 18446744073709551609ULL;
    v = (unsigned long)(~ (~ p_7));
    result = (result * (unsigned long long)(- p_4)) % (unsigned long long)(
             (unsigned long)(- p) % (v * 4201065089UL + 47UL) + 168UL);
  }
  return result;
}


