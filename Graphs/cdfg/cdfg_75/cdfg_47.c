#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 155066799
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, unsigned long long p_9[2][1][2], int p_11,
                 long long p_19, long long p_23)
{
  unsigned int v_25;
  unsigned long long v_21;
  int v_17;
  int v_15;
  signed char v_13;
  long v_6;
  unsigned long v_4;
  signed char v;
  unsigned int result;
  v_25 = (unsigned int)p_11;
  v_21 = 18446744073709502614ULL;
  v_17 = (int)p;
  v_15 = 52112;
  v = (signed char)p_11;
  result = (unsigned int)p_23;
  if ((unsigned long long)((float)(- v_21) - - p) <= ! (v_21 - (unsigned long long)p_23) + (unsigned long long)v_25) {
    v_6 = -5058L;
    v_4 = (unsigned long)((unsigned long long)((long)(p - p) + (v_6 + (long)2.45385617057e+37f)) / (
                          ~ ((unsigned long long)v_6 - p_9[0][0][0]) + 757ULL));
    result = (unsigned int)((unsigned long)v - ~ (v_4 % (unsigned long)(
                                                  v_6 + 596L)));
  }
  else {
    v_6 = (long)((long long)(- (- result)) % (((long long)(! v_17) - p_19) + 524LL));
    v_13 = (signed char)(- (29 >> (v_6 / (long)(v_15 + 840) & 7L)));
    result = (unsigned int)((float)(- (p_11 * 48317)) + ((-2.34417219533e+37f - (float)v_13) + 0.f));
  }
  return result;
}


