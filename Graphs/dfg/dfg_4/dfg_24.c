//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 544328111
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, short p_9[3],
                  long long p_11[1][4][2], double p_13, long p_17)
{
  long long v_23;
  double v_21;
  double v_19;
  unsigned long long v_15;
  float v_7;
  unsigned long long v_4;
  short v;
  unsigned long result;
  v_23 = 47174LL;
  v_21 = 222.276073952;
  v_19 = (double)p_9[0];
  v_15 = 18446744073709506230ULL;
  v_4 = (unsigned long long)(((double)(p_17 ^ p_17) - v_19 * (v_21 + -619295097.)) + (double)(- (
                             (v_23 * p_11[0][3][0]) % ((long long)p_13 + 627LL))));
  v = (short)((double)p_11[0][2][0] + (- p_13 - (double)v_15));
  v_7 = (float)(- v);
  result = (unsigned long)(~ ((unsigned long long)v + v_4) * ((4294939189ULL | p) % (
                                                              (v_4 * (unsigned long long)v_7) / (unsigned long long)(
                                                              ((int)p_9[0] + 57) + 717) + 160ULL)));
  return result;
}


