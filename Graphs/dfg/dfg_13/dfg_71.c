#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1023269518
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned int p_5, unsigned int p_7, float p_11)
{
  unsigned char v_19;
  unsigned long v_17;
  unsigned long v_15;
  short v_13;
  unsigned short v_9;
  unsigned char v;
  double result;
  v_19 = (unsigned char)p_11;
  v_17 = 3652890227UL;
  v_9 = (unsigned short)54030;
  v = (unsigned char)p;
  v_15 = 41220UL;
  v_13 = (short)(! (- ((unsigned long long)v + 18446744073032346020ULL) * (
                    (unsigned long long)(4294955775UL - v_17) * 381714689270982ULL)));
  v = (unsigned char)((unsigned long)((9800 + ((int)v_13 >> 13)) << 16UL) ^ 
                      (v_15 & v_17) / (unsigned long)((int)v_19 + 910));
  result = (double)((unsigned int)(~ ((int)p * -24581) % ((113 + (int)(! v)) + 1023)) % (
                    ((p_5 % 58963U) / (! p_7 + 45U) + (unsigned int)(
                     (int)(~ v_9) % ((int)((unsigned short)(p_11 - 109.f)) + 741))) + 110U));
  return result;
}


