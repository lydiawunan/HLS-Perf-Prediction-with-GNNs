#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 391029733
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, double p_7, unsigned long p_9[4],
                  unsigned short p_11, signed char p_13[2])
{
  char v_17;
  unsigned int v_15;
  double v_5;
  unsigned short v;
  unsigned char result;
  v_17 = (char)114;
  v_15 = (unsigned int)p_13[0];
  v_5 = (double)p_11;
  v = p_11;
  while (- (- (- v_5)) < (double)(((18446744073709537443ULL - (unsigned long long)p_9[1]) - (unsigned long long)(
                                   v_15 * 4294952337U)) - 39294ULL)) {
    v_5 = (int)v_17 / -9432;
    v = (unsigned short)63706;
    v_15 = (unsigned int)(! ((unsigned long)p - 30144UL) - ((unsigned long)p_13[0] + p_9[2]));
    v_15 = v_15;
  }
  while_0_break: ;
  if ((double)(! ((int)p * (int)p_13[1] - (int)(- v))) != - v_5) result = (unsigned char)91;
  else {
    v_5 = (double)18446744073191635606ULL;
    v = (unsigned short)((unsigned long)((35512U & (unsigned int)p_11) - (unsigned int)(
                                         (int)v + (int)p_13[1])) * ((
                                                                    (unsigned long)p / 4294930920UL) / (
                                                                    3419361329UL / (
                                                                    p_9[3] + 283UL) + 368UL)));
    result = (unsigned char)(((double)((int)v + (int)p) + v_5 / 32610.) / (
                             p_7 / ((double)p_9[1] + 214.) + 1007.));
  }
  return result;
}


