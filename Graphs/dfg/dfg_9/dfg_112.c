//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 552812213
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, unsigned int p_7[4], long long p_9,
              unsigned short p_11, char p_15)
{
  float v_13;
  float v_5;
  unsigned long v;
  long long result;
  v_13 = 337.9012146f;
  v_5 = 5355738624.f;
  v = ((unsigned long)(! p_11) ^ p / ((unsigned long)v_5 + 857UL)) % (
      p * (unsigned long)(p_7[3] | (unsigned int)p_11) + 570UL) + ~ (
      (unsigned long)(- p_7[1]) % (62280UL % (p + 939UL) + 915UL));
  result = (long long)(-74741531ULL);
  v_5 = (float)((unsigned long long)((4294931221LL / (p_9 + 838LL)) / (long long)(
                                     (int)((signed char)-242.703406693) % 116 + 978)) * (
                ((unsigned long long)p_11 | 18446744072876399479ULL) + (unsigned long long)(
                v_13 - (float)p_15)) + (unsigned long long)(- ((result / 62LL) * (long long)v)));
  result = (long long)(~ (((v + p) / (unsigned long)(((long)v_5 + -32134L) + 716L)) / (unsigned long)(
                          - p_7[2] + 277U)));
  return result;
}


