#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 697654910
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p[4][4][5], unsigned long long p_17,
         unsigned char p_19)
{
  char v_15;
  unsigned long long v_13;
  long v_11;
  unsigned char v_9;
  unsigned long long v_6;
  unsigned long long v_4;
  double v;
  long result;
  v_11 = (long)p[3][0][4];
  v_9 = (unsigned char)195;
  v_6 = 849749185ULL;
  v_4 = 477042656ULL;
  v_13 = (unsigned long long)(- (! ((int)p_19 % 2021)));
  if ((unsigned long long)((int)(- p[0][3][4]) * (int)p_19) <= ((v_6 + 44730ULL) << 16UL) + (unsigned long long)(- p[3][1][0])) {
    v = (double)(~ ((unsigned long long)p[2][0][2] + 17114ULL));
    v_6 = (unsigned long long)(446335062. / (- (- v) + 230.));
    result = (long)(- v / ((double)(v_4 * 18446744073256949303ULL) + 527.) + (double)(~ (
                    v_6 - 873880727ULL)));
  }
  else {
    v_15 = (char)(v_6 - ! (v_13 * (unsigned long long)p[3][1][2]));
    v_13 = (unsigned long long)p[0][0][2];
    result = (long)((unsigned long long)v_9 - ((unsigned long long)(! v_11) ^ 
                                               v_13 * (unsigned long long)v_15));
  }
  return result;
}


