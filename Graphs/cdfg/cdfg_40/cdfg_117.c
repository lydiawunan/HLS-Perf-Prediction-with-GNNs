#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 101366018
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, char p_5, float p_11, signed char p_15, long p_21)
{
  unsigned long long v_23;
  unsigned char v_19;
  double v_17;
  long long v_13;
  long long v_9;
  signed char v_7;
  long long v;
  long result;
  v_23 = (unsigned long long)p;
  v_19 = (unsigned char)14;
  if (990680801ULL == (unsigned long long)((long)(~ v_19) % -7052L) - ! (! v_23)) {
    v_13 = (long long)(~ ((-55180L - (long)p_5) * (long)p_15));
    v_9 = v_13;
    v_19 = (unsigned char)(- 0.);
  }
  else {
    v_19 = (unsigned char)179;
    v_9 = (long long)v_19;
    v_13 = (long long)p;
  }
  if ((int)v_19 >= (int)((unsigned char)((float)(34L % (! p_21 + 129L)) - - (
                                         p_11 * (float)p_21)))) {
    v = (long long)((int)(- (! p_5)) * (int)p_15);
    v_7 = (signed char)(- (v_9 + (long long)p_11) ^ v_13);
    result = (long)((long long)(- p % 63374L) * (! v / (long long)((int)p_5 % (
                                                                   (int)v_7 + 703) + 242)));
  }
  else {
    v = (long long)(! (~ p_15));
    v_17 = (double)v;
    result = (long)(- (- v_17 / 775.));
  }
  return result;
}


