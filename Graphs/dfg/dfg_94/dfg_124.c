#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 138535260
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p[4], long p_9, long p_15)
{
  double v_17;
  unsigned long v_13;
  unsigned char v_11;
  unsigned int v_7;
  unsigned int v_5;
  int v;
  char result;
  v_17 = (double)p_9;
  v_13 = (unsigned long)p_15;
  v_11 = (unsigned char)p_15;
  v_7 = (unsigned int)p[3];
  v_5 = (unsigned int)(- (- (- (- v_17))));
  v_17 = (double)-50992L;
  v = (int)(((unsigned long)(- (! v_7)) + (unsigned long)p_9) + (unsigned long)(
            (double)((unsigned long)v_11 / (v_13 + 227UL) - (unsigned long)(! p_15)) / (
            - (v_17 / 736.) + 894.)));
  result = (char)((unsigned int)(~ (~ (v % (p[2] + 567)))) / ((unsigned int)p[3] / (
                                                              v_5 + 609U) + 925U));
  return result;
}


