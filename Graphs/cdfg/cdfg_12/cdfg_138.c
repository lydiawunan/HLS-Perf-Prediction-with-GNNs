#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 749114224
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, float p_5[2][1], char p_11,
                  unsigned char p_17, double p_19)
{
  unsigned short v_15;
  long long v_13;
  unsigned long long v_9;
  unsigned short v_7;
  unsigned char v;
  unsigned char result;
  v_15 = (unsigned short)p_11;
  v_9 = (unsigned long long)p_19;
  result = (unsigned char)p_19;
  if (~ (v_9 % (v_9 + 479ULL) << (((unsigned int)p_11 + 488198432U) & 63U)) < (unsigned long long)p_17) {
    result = (unsigned char)131;
    v = (unsigned char)((int)((char)p_5[1][0]) % 972);
  }
  else {
    v_13 = (long long)(0. / ((double)(~ v_15) / ((double)p_17 / (p_19 + 9.) + 225.) + 116.));
    v_7 = (unsigned short)(~ (- ((long long)p_11 * v_13)));
    v = (unsigned char)(- ((57753ULL % (unsigned long long)((int)v_7 + 309)) * v_9));
  }
  result = (unsigned char)(- (((unsigned long long)v - p) - (unsigned long long)(
                              (int)result | 64193)));
  return result;
}


