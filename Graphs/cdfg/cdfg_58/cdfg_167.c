#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 618545512
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, short p_5, long long p_7[2][5][2],
                signed char p_15, unsigned short p_17[5][4])
{
  signed char v_23;
  unsigned long long v_21;
  long long v_19;
  char v_13;
  unsigned int v_11;
  char v_9;
  unsigned long long v;
  signed char result;
  v_23 = (signed char)-119;
  v_21 = (unsigned long long)p_7[1][0][0];
  v_19 = 4374LL;
  v_11 = (unsigned int)p_15;
  v_9 = (char)p_7[1][3][1];
  result = (signed char)p_17[3][0];
  v = 2722ULL - (unsigned long long)(~ v_19) * (v_21 / (unsigned long long)(
                                                (int)v_23 + 366));
  while (! (~ v) - - p / (unsigned long long)(-63 % ((int)p_5 + 787) + 286) < (unsigned long long)(~ (! (
         p_7[0][1][0] & (long long)v_9)))) {
    v_13 = (unsigned long)v_11 * 4294911540UL;
    v_11 = (unsigned int)(27587LL + (long long)(32143 | (int)v_9) % (
                                    (long long)p_5 / (p_7[1][2][0] + 896LL) + 392LL));
    v_9 = (char)(0 / (long)((15805 & (int)p_15) + 602) + (long)p_17[0][0]);
    v = (unsigned long long)(- (42228 * (int)v_13));
  }
  while_0_break: ;
  return result;
}


