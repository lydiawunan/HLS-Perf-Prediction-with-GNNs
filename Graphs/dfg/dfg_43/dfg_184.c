#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 893231147
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, unsigned long p_5[5][3][1], char p_7,
              int p_11, signed char p_13)
{
  unsigned short v_25;
  unsigned char v_23;
  int v_21;
  unsigned long v_19;
  unsigned long v_17;
  unsigned char v_15;
  int v_9;
  long long v;
  long long result;
  v_25 = (unsigned short)48031;
  v_23 = (unsigned char)p_7;
  v_21 = (int)p_13;
  v_19 = 3610793567UL;
  v_17 = 3633756827UL;
  v_15 = (unsigned char)p_13;
  v_9 = (int)p_13 >> ((! p_5[1][2][0] & (unsigned long)((int)((signed char)906.411377034) % (
                                                        (int)p_13 + 359))) / 3933349744UL & 7UL);
  v = (long long)((unsigned long)(! ((22604 % (v_9 + 171)) / ((int)p_13 + 525))) + 
                  (((unsigned long)v_15 - v_17) % (v_19 * (unsigned long)v_21 + 121UL)) % (
                  ((unsigned long)v_23 - p_5[0][2][0]) / (unsigned long)(
                  (int)v_25 + 905) + 359UL));
  v_9 = (int)(- (253266362.227 * (double)((int)p_7 + p_11)));
  result = ~ (v | (long long)p) % 45LL + (long long)(~ (p_5[4][1][0] - (unsigned long)p_7) + (unsigned long)v_9);
  return result;
}


