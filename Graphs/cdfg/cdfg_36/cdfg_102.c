#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 126901662
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, short p_7, unsigned long p_9, long long p_11,
                  short p_17)
{
  unsigned long long v_21;
  double v_19;
  int v_15;
  char v_13;
  long long v_5;
  float v;
  unsigned char result;
  v_21 = (unsigned long long)p_7;
  v_19 = 2.82769371806e+38;
  v_15 = (int)p_9;
  v_13 = (char)p_9;
  v_5 = 29006LL;
  v = 293673088.f;
  result = (unsigned char)150;
  while ((unsigned long long)((348641017LL << (4294933704UL % (unsigned long)(
                                               (int)result + 403) & 63UL)) * (long long)result) == 18446744073503262480ULL) {
    v_19 = (double)(char)88;
    v = (float)v_21;
    result = (unsigned char)((int)p_17 / ((int)p_17 + 661));
  }
  while_0_break: ;
  while ((unsigned long long)(((long long)(v / ((float)p + 127.f)) + (
                               v_5 + (long long)p_7)) * (long long)p_9) >= 
         (unsigned long long)((p_11 % -5066529619LL) % (long long)((int)p + 721)) % (
         ((unsigned long long)v_13 - 28256ULL) + 750ULL)) {
    v_5 = p_11;
    v_13 = (char)((int)p_17 & (int)((short)(- (62633. * v_19))));
    v = (float)((((int)v_13 | v_15) % -4455) * ((int)(-58700.f - v) / 82963436));
  }
  while_0_break_0: ;
  return result;
}


