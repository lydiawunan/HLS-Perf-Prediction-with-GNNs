#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 189427986
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p[4][4][5], char p_13)
{
  unsigned char v_15;
  long long v_11;
  double v_8;
  double v_6;
  int v_4;
  unsigned int v;
  short result;
  v_15 = (unsigned char)12;
  v_11 = 36147LL;
  v_4 = (int)p[2][1][1];
  v = (unsigned int)p[3][2][4];
  result = (short)p_13;
  v_6 = (double)53050U;
  while ((unsigned long)result == 4157415719UL) {
    v = (unsigned int)v_6 * (v * 803617475U);
    v_8 = (double)((v_11 % ((long long)p[0][1][3] + 361LL)) / (long long)(
                   (int)(- p_13) + 988) & (long long)(- p[1][3][2] - (float)(
                                                      (int)v_15 + (int)v_15)));
    v_6 = (double)(- (- p[1][0][1]));
    result = (short)((long long)v_8 % ((long long)(~ v_4) % 2818070564LL + 890LL));
  }
  while_0_break: ;
  return result;
}


