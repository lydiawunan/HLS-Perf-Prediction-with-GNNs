#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 177816804
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, long p_7, double p_9[1][3][4],
                   double p_11, unsigned char p_13)
{
  long long v_21;
  unsigned short v_19;
  unsigned char v_17;
  unsigned long v_15;
  unsigned short v_4;
  unsigned int v;
  unsigned short result;
  v_21 = -910597547LL;
  v_19 = (unsigned short)35839;
  v_17 = (unsigned char)p_7;
  v_4 = (unsigned short)p_9[0][0][3];
  v = (unsigned int)p_13;
  if (27897UL == (unsigned long)((unsigned int)(-39257 / ((int)v_17 + 364)) + (
                                 4294967201U - v)) - 4294962305UL) {
    v_15 = (unsigned long)v;
    result = (unsigned short)p_7;
    v_17 = (unsigned char)(- (- ((double)result / (p_11 + 931.))));
  }
  else {
    result = (unsigned short)15438;
    v_15 = (unsigned long)(((long long)v_17 * (v_21 / -142860448LL)) * (long long)(
                           (int)p_9[0][2][1] + 30856 * (int)result));
    result = (unsigned short)(((long)p_11 - p_7) % (long)((int)v_4 + 925));
  }
  if ((int)result >= (int)v_19) {
    result = (unsigned short)(((unsigned long)(! p_13) % (v_15 + 668UL)) / (unsigned long)(
                              ((int)((char)p_9[0][0][2]) * -52 + (int)v_17 % 101) + 445));
    v = (unsigned int)((int)((unsigned short)(- (p_9[0][1][1] * p_11))) / (
                       (int)(! (! result)) + 673));
    result = (unsigned short)((unsigned long)v & (unsigned long)((long)(
                                                                 -92 / (
                                                                 (int)v_4 + 49)) * (
                                                                 (long)p / (
                                                                 p_7 + 419L))));
  }
  else result = (unsigned short)p;
  return result;
}


