#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 901531850
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, double p_9, unsigned long long p_11, double p_19,
        double p_21)
{
  char v_23;
  unsigned char v_17;
  unsigned int v_15;
  long v_13;
  long long v_7;
  unsigned char v_5;
  double v;
  int result;
  v_23 = (char)p_9;
  v_17 = (unsigned char)128;
  v_7 = (long long)p_21;
  v_5 = (unsigned char)p_11;
  v = -7447798451.34;
  result = (int)p_9;
  if ((double)p_11 * ((double)(8876396289LL * v_7) + - p_9) <= (double)(- (
      p_11 % (unsigned long long)((int)v_5 / ((int)v_23 + 621) + 594)))) {
    v_15 = (unsigned int)v_17;
    v_13 = (long)p_11;
    v_7 = (long long)(- (! ((unsigned long)v_13 % (unsigned long)(v_15 + 476U))));
  }
  else {
    v_7 = ~ (v_7 - (long long)p_21) * (long long)(p_19 * (p_19 - 19581.));
    result = (int)p_19;
    v = (double)315790468;
  }
  while ((((double)result * v) * -89.) * (double)(p / (- p + 711UL)) < 741.151733398) {
    v_5 = v_7 * 24LL;
    v = (double)((unsigned long long)v_5 % (((unsigned long long)p + - p_11) + 427ULL));
    v_5 = (unsigned char)(~ ((p / 4294942813UL) * 670231247UL));
    result = (int)((double)((int)((unsigned char)(- v)) % ((int)(! v_5) + 739)) / (
                   (((double)p - p_9) - (double)((int)((signed char)v) * 92)) + 228.));
  }
  while_0_break: ;
  return result;
}


