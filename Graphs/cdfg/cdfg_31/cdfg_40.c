#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 433299789
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p[2], short p_4, unsigned long p_6[5],
                 double p_9, char p_11)
{
  float v_21;
  double v_19;
  long long v_17;
  unsigned long long v_15;
  long v_13;
  int v;
  unsigned int result;
  v_19 = p_9;
  v_17 = 1017790746LL;
  v_15 = 22463ULL;
  v_13 = -86893450L;
  if ((double)(- (- (v_15 - (unsigned long long)v_17))) == (double)(- v_15) + 
                                                           (double)((int)p_4 / (
                                                                    (int)p_4 + 195)) / (
                                                           p_9 + 622.)) {
    v = (int)(((unsigned long long)((unsigned long)v_13 ^ p_6[4]) - ~ v_15) * (unsigned long long)(! (
              v_17 / ((long long)v_19 + 359LL))));
    v = ~ (((int)p_11 / ((int)p_4 + 177)) / (- v + 411));
    result = (unsigned int)(! ((int)-2217784902.22 % (v + 882)) * (int)(- (
                            9010. + p_9)));
  }
  else {
    v_21 = (float)-16323LL;
    result = (unsigned int)v_21;
  }
  result = (unsigned int)(((unsigned long)(! p[1]) + (unsigned long)p_4 * p_6[0]) - - (
                          (unsigned long)result + 4294966772UL));
  return result;
}


