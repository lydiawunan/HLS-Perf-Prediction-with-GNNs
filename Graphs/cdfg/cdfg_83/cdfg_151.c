#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 766319203
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, char p_7, char p_11, int p_19, double p_23[3][1][3])
{
  long long v_25;
  signed char v_21;
  unsigned char v_17;
  int v_15;
  signed char v_13;
  unsigned char v_9;
  unsigned short v_4;
  unsigned short v;
  long long result;
  v_25 = -425504665LL;
  v_21 = (signed char)108;
  v_17 = (unsigned char)p_11;
  v_15 = p_19;
  v_13 = (signed char)126;
  v_9 = (unsigned char)251;
  result = (long long)p;
  if ((long long)(! (20718 % ((int)p_11 + 824)) % -913) >= - ((long long)v_17 % (
                                                              ! v_25 + 580LL))) {
    v_13 = (signed char)8454613816.03;
    result = 100LL;
    v_17 = (unsigned char)54;
  }
  else {
    v_9 = (unsigned char)p_23[2][0][1];
    v_15 = 56935;
    v_21 = (signed char)(- (- p_23[0][0][2] - (double)(! p_19)));
  }
  if ((long long)(140653732L * (long)p) - ((long long)(-30868 * (int)p_7) + 
                                           result / 180LL) <= (long long)(
      (double)(1146 / ((int)(~ v_21) + 957)) - p_23[2][0][2])) {
    v_4 = (unsigned short)(- ((int)v_9 / ((int)p_11 + 21)) / (((int)v_13 ^ v_15) % (
                                                              (int)v_17 + 682) + 899));
    v = (unsigned short)((unsigned long)(((int)v_4 + -22) / 120) & ((unsigned long)p / 4294940816UL + (unsigned long)(
                                                                    30 + (int)p_7)));
    result = (long long)v;
  }
  else result = (long long)(~ (~ ((int)p * p_19)));
  return result;
}


