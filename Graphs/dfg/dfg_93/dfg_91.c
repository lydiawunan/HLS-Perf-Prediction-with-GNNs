#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 847324558
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, unsigned long p_5, double p_7, unsigned char p_11,
         unsigned int p_13[1])
{
  unsigned long v_17;
  short v_15;
  short v_9;
  int v;
  long result;
  v_17 = 4294963167UL;
  v_15 = (short)-4854;
  result = (long)p_5;
  v_9 = (short)((unsigned long)(! (! (~ result))) % (! (v_17 * 4294967185UL) + 176UL));
  v = (int)((long long)((int)(~ v_15) * (int)((short)(- p_7))) % 28621LL);
  v = (int)((double)((long long)p_7) / ((double)v / -8839452256.98 + 912.));
  result = (long)(((unsigned long)((int)p / 481563328) / ((unsigned long)v % 4294945176UL + 376UL)) * (
                  p_5 % ((unsigned long)(p_7 + (double)v_9) + 643UL)) >> (
                  ((int)(! (~ p_11)) << (- p_13[0] & 7U)) & 31));
  return result;
}


