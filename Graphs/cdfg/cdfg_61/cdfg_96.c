#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 79761156
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, unsigned long p_7, unsigned int p_9,
                  unsigned int p_11[3][1][1], long long p_15)
{
  int v_27;
  double v_25;
  unsigned long long v_23;
  unsigned short v_21;
  short v_19;
  char v_17;
  unsigned long long v_13;
  char v_5;
  char v;
  unsigned long result;
  v_27 = (int)p_9;
  v_25 = (double)p_15;
  v_23 = (unsigned long long)p_11[1][0][0];
  v_21 = (unsigned short)p_9;
  v_19 = (short)8281;
  v_17 = (char)63;
  v_5 = (char)p_9;
  while (61199. < 0. * ((double)(p_7 / (unsigned long)((int)v_21 + 393)) + 
                        (double)v_23 / (v_25 + 539.))) {
    v_19 = v_27 + -15998;
    v_23 = (unsigned long long)(67 + (int)v_5);
    v_25 = (double)p_7;
    v_21 = (unsigned short)((unsigned int)(~ ((int)p * 13659)) / (! (
                                                                  (unsigned int)p / 3489099770U) + 1001U));
  }
  while_0_break: ;
  if ((int)(~ v_19) < 23316) {
    v_5 = (char)p_11[1][0][0];
    v = (char)(- ((unsigned long)v_5 * p_7 + (unsigned long)(198U | p_9)));
    result = (unsigned long)((int)(~ p) % ((int)v + 729));
  }
  else {
    v_5 = (char)(p_15 * (long long)((int)v_17 / ((int)(! p) + 248)));
    v_13 = (unsigned long long)p;
    result = (unsigned long)(! ((int)v_5 << (v_13 & 7ULL)) % -114);
  }
  return result;
}


