#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 808575386
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned short p_11, double p_13)
{
  unsigned long long v_15;
  float v_9;
  unsigned short v_7;
  unsigned long long v_5;
  unsigned long v;
  short result;
  v_15 = 54208ULL;
  v_9 = (float)p_11;
  v_5 = 707116161ULL;
  v_7 = (unsigned short)(! ((unsigned long long)(49623. + p_13) - ! v_15) - v_5);
  v_5 = (((unsigned long long)v_7 + 13540ULL) / (unsigned long long)(
         (4720 ^ (int)p) + 757)) * (unsigned long long)(v_9 / ((float)p_11 + 389.f) - 813089088.f) + (unsigned long long)(~ (
        (long long)((int)p - 209) % -151628353LL));
  v = (unsigned long)((unsigned long long)p | v_5);
  result = (short)(v + 606787640UL);
  return result;
}


