#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 508811428
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, unsigned long long p_4, short p_6, long long p_8,
                unsigned char p_10)
{
  unsigned long long v_21;
  char v_19;
  long long v_17;
  double v_15;
  unsigned char v_13;
  unsigned short v;
  signed char result;
  v_17 = (long long)p_4;
  v_15 = -2.33652589166e+38;
  v_13 = p_10;
  v = (unsigned short)p_4;
  if ((double)((p_4 - 18446744073709481249ULL) & (unsigned long long)(
               ~ p_8 * (long long)(-82 - (int)p_10))) >= - ((double)v / -9747971146.47) * (double)(
                                                         (float)(~ p_6) - 315.495147705f)) {
    v_19 = (char)((2574LL % ((v_17 + (long long)p_10) + 721LL)) / (! (
                                                                   p_8 & (long long)p_6) + 457LL));
    result = (signed char)((-15216 % ((int)((short)v_15) + 657) + (int)-6125440528.53) / (
                           (int)v_19 + 233));
    v_13 = (unsigned char)(! ((long long)p_10 / (v_17 + 153LL) + (5730314647LL + v_17)));
  }
  else {
    result = (signed char)(~ (-991240374LL + (long long)(25L % (p + 241L))));
    v_21 = p_4;
    v = (unsigned short)(! ((unsigned long long)(v_17 / (p_8 + 300LL)) + - v_21));
  }
  while ((long long)(! p) % (((long long)p_6 % (p_8 + 324LL)) * (long long)(! p_10) + 444LL) < (long long)(- (- (
         (float)v / -1.0522250431e+38f)))) {
    v_13 = (long long)v_13 - 17754LL;
    v_15 = (double)((p_4 - 121ULL) * (unsigned long long)(~ p_8) - (unsigned long long)(! p_10));
    result = (signed char)(59 / (-168051390 * (int)v_15 + 201));
    v = (unsigned short)(-7017747968.f + (float)((long long)((long)p_10 + p) / -5LL));
  }
  while_0_break: ;
  return result;
}


