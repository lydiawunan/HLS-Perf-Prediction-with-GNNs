#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 205381819
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, char p_4[2][5][3], int p_13, long p_17)
{
  long v_19;
  int v_15;
  int v_11;
  char v_9;
  unsigned char v_7;
  unsigned short v;
  unsigned int result;
  v_19 = p_17;
  v_15 = (int)p_4[0][3][1];
  v_7 = (unsigned char)p_13;
  v_11 = -115;
  v_9 = (char)((long long)(- (p_13 / ((int)p + 916)) & v_15) + (long long)(! p) / (
                                                               ((long long)p_17 % 2349LL + (long long)(- v_19)) + 583LL));
  v = (unsigned short)(((int)v_9 % ((v_11 + p_13) / (! v_15 + 443) + 414)) * (
                       (((int)v_9 << ((int)p_4[0][4][2] & 7)) & (int)-4.00650796494e+36f) >> (
                       (int)v_7 & 31)));
  result = ((unsigned int)((int)p + (int)p) * (4292774934U - (unsigned int)p_4[1][2][1]) - (unsigned int)(
            ((int)v / ((int)v + 395)) * 30769)) - (unsigned int)v_7;
  return result;
}


