#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 727500459
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, unsigned short p_7, char p_9,
                 unsigned char p_15, short p_17)
{
  long v_21;
  float v_19;
  long long v_13;
  long v_11;
  double v_4;
  long long v;
  unsigned int result;
  v_21 = -646325193L;
  v_19 = -8830117888.f;
  v_13 = -1020775965LL;
  v_4 = 5417950311.17;
  result = (unsigned int)p_17;
  v_11 = (long)(- (7U + (unsigned int)(~ p_17)));
  if ((272894144LL & ((long long)v_11 / (v_13 + 468LL)) % (long long)(
                     (int)(~ p_15) + 679)) <= (long long)((unsigned long)(
                                                          23189 ^ (int)p_17) % 492365115UL + (unsigned long)(- (
                                                          v_19 * (float)v_21)))) {
    v_4 = (double)(3547729349ULL / (p + 242ULL) + (unsigned long long)p_7) - 
          ((double)result + 9.36501648707e+37) * v_4;
    v = (long long)(18446744073709542791ULL - p);
    result = (unsigned int)(! v / ((long long)((double)result * (v_4 - v_4)) + 612LL));
  }
  else result = (unsigned int)p_9;
  return result;
}


