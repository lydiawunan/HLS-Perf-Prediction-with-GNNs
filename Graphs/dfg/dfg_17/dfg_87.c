#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 688544747
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p)
{
  char v_13;
  unsigned char v_11;
  unsigned short v_9;
  unsigned int v_6;
  unsigned long v_4;
  unsigned long v;
  int result;
  v_13 = (char)-21;
  v_11 = (unsigned char)19;
  v_9 = (unsigned short)39935;
  v_6 = ! ((unsigned int)(- v_9) % 28636U) ^ (unsigned int)(! ((int)(~ v_11) * (
                                                               (int)v_13 * (int)((char)8562241536.f))));
  v = (unsigned long)(! (~ (v_6 * (unsigned int)p) - (unsigned int)(! (
                         (int)((short)2284463616.f) + 31234))));
  v_4 = ~ 4294947206UL;
  result = (int)(50434ULL / ((- (319539582ULL << (v & 63UL)) ^ (unsigned long long)(
                              (103UL + v_4) - 316UL)) + 730ULL));
  return result;
}


