#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 870740341
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p)
{
  unsigned int v_14;
  unsigned short v_12;
  unsigned int v_10;
  unsigned long v_8;
  unsigned int v_6;
  int v_4;
  unsigned long v;
  unsigned short result;
  v_14 = (unsigned int)p;
  v_10 = (unsigned int)p;
  v_8 = 4294927866UL;
  v_6 = 220874768U;
  v_4 = (int)p;
  result = (unsigned short)42828;
  v = (unsigned long)((long long)(- result) % (((long long)((int)p - (int)(! p)) | - (
                                                (long long)result - -16038LL)) + 925LL));
  v_12 = (unsigned short)(((-365804988LL << (v_6 & 63U)) / (long long)(
                           19962U % (v_10 + 339U) + 724U) - (long long)(! v_14)) + (long long)(
                          (unsigned long)(41 / (~ v_4 + 42)) % ((v_8 % (unsigned long)(
                                                                 (int)p + 593) - 34UL) + 368UL)));
  v_6 = - v_6;
  result = (unsigned short)(((23431025UL / (~ v + 505UL)) % ((unsigned long)(
                                                             (unsigned int)v_4 ^ v_6) % (
                                                             v_8 + 213UL) + 628UL)) * (unsigned long)(! (- (
                            v_10 / (unsigned int)((int)v_12 + 930)))));
  return result;
}


