#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 923808922
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p[3][3][3], long long p_5,
          unsigned short p_9[1][5][1], signed char p_21)
{
  unsigned char v_25;
  float v_23;
  unsigned long v_19;
  double v_17;
  unsigned int v_15;
  int v_13;
  short v_11;
  long v_7;
  unsigned long v;
  short result;
  v_25 = (unsigned char)185;
  v_23 = (float)p_21;
  v_19 = 1030621338UL;
  v_15 = (unsigned int)p_5;
  v_13 = (int)p_5;
  v = 4120280072UL;
  result = (short)11492;
  v_17 = (double)((int)p_9[0][0][0] >> ((int)p[0][2][1] & 15));
  v_7 = (long)(((v_17 * (double)(~ p_5)) / (- (- v_17) + 323.)) * (((double)(
                                                                    v_19 * 99UL) + 
                                                                    v_17 / (
                                                                    (double)v_15 + 913.)) - (double)(
                                                                   p_5 * (long long)p_21 ^ (long long)(
                                                                   (int)((unsigned char)v_23) - (int)v_25))));
  v_11 = (short)(~ ((~ v_15 + v_15) / (unsigned int)((int)result + 97)));
  result = (short)((long long)((-934L + 1040079735L / (long)((int)p[1][2][1] + 271)) >> (
                               0 % ((int)p[0][0][0] + 91) & 31)) / ((
                                                                    (long long)(! v) % (
                                                                    p_5 % (long long)(
                                                                    v_7 + 39L) + 901LL) + (long long)(
                                                                    (
                                                                    224 - (int)p_9[0][4][0]) * (
                                                                    (int)v_11 * v_13))) + 170LL));
  return result;
}


