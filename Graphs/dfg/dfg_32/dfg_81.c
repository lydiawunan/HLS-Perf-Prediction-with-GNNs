#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 727052704
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, long long p_11, unsigned char p_13)
{
  unsigned int v_9;
  float v_7;
  long long v_5;
  unsigned long long v;
  char result;
  v_9 = (unsigned int)p_13;
  v = (unsigned long long)p_11;
  result = (char)p_13;
  v_7 = (float)((int)result % ((int)((char)-2.21935054971e+24f) + 1017));
  v_5 = (long long)(-1.62506438801e+38 / ((double)(887795197LL - (long long)v_9) + 587.)) - (
        - p_11 - (long long)(4072324145.38 * (double)((unsigned long long)p_13 / (
                                                      v + 142ULL))));
  v = (unsigned long long)(~ ((long long)(~ p) * v_5) * (long long)(! (
                           33 ^ (int)((char)(v_7 + -104.f)))));
  result = (char)(! (~ v + 18446744073709547570ULL) << ((unsigned long)result % (
                                                        ! (4294967293UL % (
                                                           p + 986UL)) + 781UL) & 63UL));
  return result;
}


