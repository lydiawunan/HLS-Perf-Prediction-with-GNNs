#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 692198729
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, short p_9[5][5][4], unsigned short p_11)
{
  unsigned long long v_19;
  char v_17;
  short v_15;
  unsigned long long v_13;
  unsigned char v_7;
  unsigned char v_4;
  int v;
  float result;
  v_19 = 18446744073709525532ULL;
  v_17 = (char)p;
  v_15 = p_9[3][2][2];
  v_13 = 18446744072776566020ULL;
  v_7 = p;
  v = (int)p_11;
  result = (float)(~ ((unsigned long long)v_17 - (v_19 % 18446744073502557819ULL) % (unsigned long long)(
                                                 ! v + 406)));
  v_4 = (unsigned char)45;
  v = (int)(((unsigned long long)(((int)v_7 % ((int)p_9[3][4][3] + 43)) / (
                                  (int)p_11 + 698)) / (((unsigned long long)(
                                                        (int)v_4 / ((int)((unsigned char)857.358825684f) + 727)) | 
                                                        v_13 % (unsigned long long)(
                                                        (int)v_15 + 390)) + 574ULL)) % (unsigned long long)(
            ((int)p_9[3][1][2] | (int)(~ v_7)) * (29920 * (int)p_11) + 662));
  result = (float)((long long)(((int)(27842.f + result) >> (v & 31)) - (int)(~ v_4)) - 
                   ((long long)(- p) - -1720LL) / 5128LL);
  return result;
}


