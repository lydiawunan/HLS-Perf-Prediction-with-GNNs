#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 480244653
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p[4][1], int p_13, signed char p_15[1])
{
  unsigned long v_10;
  long v_8;
  unsigned long long v_6;
  unsigned char v_4;
  float v;
  unsigned short result;
  v_10 = (unsigned long)p[2][0];
  v_8 = -1028499982L;
  v_6 = 29534ULL;
  v_4 = (unsigned char)(p_13 - (int)(- p_15[0]));
  result = (unsigned short)(! (((int)(! p[2][0]) / ((int)p[3][0] + 299)) % (
                               p_13 + 885)));
  v = (float)(~ ((v_6 * 228ULL + (unsigned long long)((unsigned long)v_8 / (
                                                      v_10 + 48UL))) * (unsigned long long)(
                 (int)result % ((int)p[3][0] + 402))));
  result = (unsigned short)((int)((unsigned char)(- (- (- v)))) + (int)v_4);
  return result;
}


