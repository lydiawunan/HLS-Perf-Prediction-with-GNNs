#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 202196698
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, int p_7[1], signed char p_9, unsigned short p_17,
                  unsigned long long p_19)
{
  long v_21;
  unsigned long long v_15;
  long v_13;
  double v_11;
  unsigned long v_5;
  char v;
  unsigned long result;
  v_21 = (long)p_17;
  v_15 = 18446744073072856934ULL;
  v_13 = 376505845L;
  v_11 = -1.25479260112e+38;
  v_5 = 4235122214UL;
  v = (char)-105;
  result = 4294940089UL;
  if ((unsigned long long)p_9 * ((unsigned long long)p_7[0] % (v_15 + 523ULL)) + 
      (unsigned long long)(result >> (v_15 & 31ULL)) * (p_19 % (p_19 + 240ULL)) != v_15) {
    v = (char)(- (v_21 * p) - - ((long)p_7[0] ^ p));
    result = (unsigned long)7862294528.f;
    v_15 = (unsigned long long)result;
  }
  else {
    v_15 = (unsigned long long)(! ((long long)(result * (unsigned long)p_17) / (
                                   (59148LL >> ((int)p_17 & 63)) + 101LL)));
    result = (unsigned long)(- v_21) ^ - (v_5 + 50684UL);
    v_11 = v_11;
  }
  while (((unsigned long)p ^ (unsigned long)(891026480L - (long)v) / (
                             ~ v_5 + 9UL)) >= (unsigned long)(- ((double)(
                                                                 p_7[0] - (int)p_9) - (
                                                                 v_11 + 4294967153.)))) {
    result = v_15 % 18446744073709551606ULL;
    v_5 = (unsigned long)(((unsigned long long)(v_5 / (unsigned long)(
                                                (int)p_9 + 898)) + (unsigned long long)v_5 % (
                                                                   p_19 + 115ULL)) + 
                          ((unsigned long long)p - p_19) * (unsigned long long)(
                          (long long)v_13 % -164914085LL));
    v_13 = (long)(~ (~ p_19));
    v = (char)((unsigned long long)(-65 / ((int)p_17 + 101) - p_7[0]) / (
               (unsigned long long)((int)p_9 * -336) % (p_19 % (unsigned long long)(
                                                        result + 605UL) + 172ULL) + 554ULL));
  }
  while_0_break: ;
  return result;
}


