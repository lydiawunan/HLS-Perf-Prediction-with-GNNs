#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 626271612
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, unsigned long long p_9, short p_11, int p_13, long p_15)
{
  unsigned int v_27;
  char v_25;
  char v_23;
  unsigned char v_21;
  char v_19;
  double v_17;
  unsigned char v_7;
  double v_4;
  unsigned long v;
  double result;
  v_27 = (unsigned int)p_15;
  v_25 = (char)p_9;
  v_23 = (char)p_13;
  v_21 = (unsigned char)p_13;
  v_19 = (char)p_11;
  if (48799UL == - ((unsigned long)v_27 % (unsigned long)((p_15 + (long)p_11) + 522L))) {
    v_17 = (double)(- v_19);
    v_7 = (unsigned char)(- (~ p_13 % 678));
    v = (unsigned long)((long long)v_7 / 954373937LL);
  }
  else {
    v = (unsigned long)((((long)v_21 - 789557251L) % (long)((int)v_23 + 488)) / (long)(
                        ((int)p_11 / -69 + (int)v_25) + 506));
    v_17 = (double)977.04510498f;
    v_7 = (unsigned char)((float)(! (1855201300 * p)) * - ((float)p_9 - -684.059936523f));
  }
  if (- (((unsigned long)p_11 & v) / 55909UL) != (unsigned long)((unsigned int)p_13 % 3537630515U >> (
                                                                 (p_15 / (long)(
                                                                  (int)v_7 + 800)) / (long)(
                                                                 (7004 + (int)((short)v_17)) + 493) & 31L))) {
    v = (unsigned long)(~ (- (18446744073709536288ULL / (unsigned long long)(
                              p + 712))));
    v_4 = (double)(! (signed char)-62);
    result = (double)(! (509959590UL | v % ((unsigned long)v_4 + 524UL)));
  }
  else {
    v_7 = (unsigned char)(p_9 * (unsigned long long)p_11 | 18446744073709501429ULL);
    result = (double)(~ (- ((unsigned int)v_7 * 930011631U)));
  }
  return result;
}


