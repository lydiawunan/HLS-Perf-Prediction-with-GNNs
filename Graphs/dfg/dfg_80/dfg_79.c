#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1015254213
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, float p_5, unsigned char p_7, long long p_11,
        unsigned int p_13)
{
  unsigned short v_19;
  int v_17;
  unsigned short v_15;
  unsigned long v_9;
  unsigned char v;
  int result;
  v_19 = (unsigned short)p_5;
  v_17 = 882332859;
  v_15 = (unsigned short)21009;
  result = (int)p_7;
  v = (unsigned char)((((unsigned long long)(~ result) + (934052184ULL | (unsigned long long)v_15)) << (
                       v_17 & 63)) - (unsigned long long)(~ ((int)v_19 * ~ v_17)));
  v_9 = (unsigned long)(~ p_11 * (long long)((unsigned long)(- v) | - (
                                             (unsigned long)p_13 | 4294956713UL)));
  v = (unsigned char)(- (- v_9) / 12016UL + 980288401UL);
  result = (int)((long)p + (-23788L - (long)((int)v % ((int)((unsigned char)p_5) + 229))) % (long)(
                           (int)(- p_7) + 724));
  return result;
}


