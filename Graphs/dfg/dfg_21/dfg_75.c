#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 22271164
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p[5][5][3], unsigned long long p_4,
                   long long p_6[3][3], signed char p_8,
                   unsigned long long p_11[1])
{
  float v_27;
  unsigned long v_25;
  unsigned long v_23;
  long long v_21;
  unsigned long v_19;
  unsigned int v_17;
  unsigned char v_15;
  long long v_13;
  signed char v;
  unsigned short result;
  v_27 = (float)p_6[0][2];
  v_25 = 300656077UL;
  v_23 = (unsigned long)p[0][0][2];
  v_21 = p_6[0][2];
  v_19 = (unsigned long)p_4;
  v_17 = 22732U;
  v_13 = -52578LL;
  v_15 = (unsigned char)((! (51283ULL | (unsigned long long)v_21) >> (
                          ~ v_23 / (unsigned long)(3681688925U / ((unsigned int)4388715969.03 + 671U) + 265U) & 63UL)) * (unsigned long long)(! (
                         - p_6[1][2] + (long long)((float)v_25 - v_27))));
  result = (unsigned short)(! ((unsigned long long)(- (v_19 % (unsigned long)(
                                                       v_17 + 772U))) - (
                               (unsigned long long)((int)((signed char)754.882202148f) % -45) + (
                               (unsigned long long)p_8 + p_11[0]))));
  v = (signed char)((unsigned long long)(! v_13) * (((unsigned long long)(- v_15) & (
                                                     p_4 | (unsigned long long)v_17)) / (unsigned long long)(
                                                    v_19 + 806UL)));
  result = (unsigned short)(~ ((unsigned long long)((int)((unsigned short)p[4][3][2]) - (int)result) * p_4) & (
                            (unsigned long long)(p_6[0][0] + (long long)(
                                                 25 / ((int)p_8 + 348))) + - (
                            (unsigned long long)v | p_11[0])));
  return result;
}


