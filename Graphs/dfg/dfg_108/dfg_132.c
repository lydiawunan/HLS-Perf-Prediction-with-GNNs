#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 620912290
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p[4][3][1], long long p_4, unsigned int p_6,
          char p_9[4][4][1], float p_11)
{
  double v_15;
  unsigned long long v_13;
  long long v;
  short result;
  v_15 = (double)p_4;
  v_13 = (unsigned long long)p_11;
  result = (short)((long long)((double)v_13 * - v_15) * ! (- p_4));
  v = (long long)(- (- (- p_11) - (float)(- (- p_9[1][1][0]))));
  v = (long long)(- result) & (((long long)p_9[0][2][0] ^ p_4) - v);
  result = (short)((unsigned long long)(~ ((long long)((int)p[3][2][0] - -39) & 
                                           62080253LL * p_4)) + (9441ULL / (unsigned long long)(
                                                                 (unsigned long)p_6 * 871554536UL + 77UL) << (
                                                                 v & 63LL)));
  return result;
}


