#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 803326696
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, char p_7, long long p_11[1][3][1],
                 unsigned long long p_15, unsigned long long p_17)
{
  short v_21;
  unsigned short v_19;
  int v_13;
  signed char v_9;
  int v_4;
  unsigned short v;
  unsigned int result;
  v_21 = (short)p_17;
  v_19 = (unsigned short)54399;
  v_9 = (signed char)p_7;
  v = (unsigned short)63246;
  result = (unsigned int)p_11[0][2][0];
  if ((unsigned long long)v_19 != ~ (- p_15) + (unsigned long long)(32718 - (int)v_9)) {
    v_19 = (unsigned short)(- ((double)p_7 / (831286083. / (p + 981.) + 299.)));
    v_13 = (int)(3935964414. + (((double)p_17 - -6814205642.74) - (double)v_19));
    result = -4294957966U;
  }
  else {
    v = (unsigned short)(~ 56119079U);
    v_13 = (int)((unsigned long long)(! ((int)((short)p) / ((int)v_21 + 311))) & ~ (
                 p_17 ^ p_17));
    v_9 = (signed char)(~ p_17);
  }
  if (- ((double)p_7 * -2711953815.15) / ((double)(- ((long long)p_7 + p_11[0][1][0])) + 582.) <= (double)(
      (unsigned long long)(-39411352LL & (long long)(v_13 % ((int)v + 884))) % (
      p_15 + 352ULL))) result = 4294944244U;
  else {
    v_4 = (int)(105ULL - ((unsigned long long)p * 207340870ULL << ((int)p_7 * (int)v_9 & 63)));
    v = (unsigned short)((result / 10012U << 23) * (unsigned int)(- (
                         v_4 * 5391)));
    result = (unsigned int)(~ (~ (18446744073402243247ULL * (unsigned long long)v)));
  }
  return result;
}


