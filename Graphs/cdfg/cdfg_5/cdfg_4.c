#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 572170631
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, signed char p_9[4][5], int p_11, long p_13,
                  unsigned long long p_15)
{
  long long v_21;
  char v_19;
  char v_17;
  unsigned long v_7;
  unsigned char v_4;
  signed char v;
  unsigned char result;
  v_21 = -25981LL;
  v_19 = (char)-108;
  v_7 = 2934UL;
  v = (signed char)-57;
  v_4 = (unsigned char)(- (923.537998789 - (double)v_7) + (double)(- (
                        p_13 % -20396L)));
  if (- (241132963UL / (unsigned long)((int)(- v) + 72)) < 81UL) {
    v_7 = (unsigned long)((unsigned long long)p_11 - ((unsigned long long)p_13 & ~ p_15));
    v = (signed char)(! ((unsigned long)(! p) % ((v_7 ^ (unsigned long)p_9[1][1]) + 578UL)));
    result = (unsigned char)(~ ((54694 % ((int)v + 988)) / ((int)v_4 + 630)));
  }
  else {
    v_17 = (char)((long long)((int)v_4 * p_11) % -5924LL + v_21);
    v_17 = (char)(- (- ((int)v_19 | (int)v_17)));
    result = (unsigned char)(! ((long)(- v_17) * (p_13 / (long)((int)p + 757))));
  }
  return result;
}


