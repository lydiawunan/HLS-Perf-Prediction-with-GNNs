#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 28641296
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, signed char p_15[4], char p_19,
                   unsigned long long p_21, int p_23)
{
  unsigned char v_17;
  unsigned long v_13;
  long long v_11;
  float v_9;
  unsigned char v_7;
  unsigned long long v_4;
  char v;
  unsigned short result;
  v_17 = (unsigned char)p_19;
  v_13 = (unsigned long)p;
  v_7 = (unsigned char)170;
  v_4 = (unsigned long long)p_23;
  v = p_19;
  v_9 = - ((((float)p_15[2] / 2.62048123607e+37f) / 853.f) / ((float)(
                                                              ((unsigned long long)p_23 % (
                                                               p_21 + 206ULL)) % 41254ULL) + 998.f));
  v_11 = (long long)((((unsigned long long)p_15[1] * v_4 + (unsigned long long)(
                       (int)v_17 % ((int)v + 249))) & 94ULL) * (((unsigned long long)p_19 & 
                                                                 (unsigned long long)p_19 % (
                                                                 p_21 + 340ULL)) >> (
                                                                v_13 & 63UL)));
  v_4 = (unsigned long long)((long long)((unsigned long)v_7 / (- (279913294UL + (unsigned long)p) + 456UL)) / (
                             (((long long)((int)((short)v_9) * (int)p) - (
                               47454LL + v_11)) + (long long)((unsigned long)(
                                                              -66 ^ (int)v_7) - (
                                                              (unsigned long)v_7 + v_13))) + 271LL));
  result = (unsigned short)(((unsigned long long)(! (9754U - (unsigned int)v)) - - (
                             v_4 / 3288150894ULL)) + (unsigned long long)p);
  return result;
}


