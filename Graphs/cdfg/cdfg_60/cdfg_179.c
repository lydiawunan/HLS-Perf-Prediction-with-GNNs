#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 197496218
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p[2][4], short p_7[3], short p_9, signed char p_13[5][1][4],
        unsigned short p_15)
{
  signed char v_25;
  unsigned char v_23;
  unsigned char v_21;
  unsigned short v_19;
  double v_17;
  unsigned int v_11;
  char v_4;
  double v;
  int result;
  v_25 = (signed char)34;
  v_23 = (unsigned char)p[0][3];
  v_21 = (unsigned char)7;
  v = (double)p_7[1];
  if (! (~ ((int)v_25 / 59679)) == -109) {
    v = (double)(~ (0 / ((int)v_21 + 645)));
    result = (int)475.140869141f;
    v_19 = (unsigned short)p[0][0];
  }
  else {
    result = (int)((unsigned char)v) / ((int)v_23 + 855);
    v = (double)((int)(! (~ p_9)) / 24963);
    v_19 = (unsigned short)41594;
  }
  if ((unsigned int)(result + (25977 & result) / ((int)(! p_13[1][0][2]) + 303)) >= 
      63747U % ((25U >> ((unsigned int)(1.43122012072e+38f - (float)v_19) & 31U)) + 789U)) {
    v_11 = (unsigned int)(! (42439ULL / (unsigned long long)((int)p_15 + 907) - (unsigned long long)(~ p_13[4][0][3])));
    v_4 = (char)(((unsigned int)(198 / (result + 30)) + ((unsigned int)p_9 - v_11)) / (unsigned int)(
                 - ((int)p_13[2][0][1] + (int)p_13[1][0][1]) + 455));
    result = (int)((v / ((double)v_4 + 24.)) / ((double)(- p[0][0] / (
                                                         (int)p_7[1] + 703)) + 123.));
  }
  else {
    v_17 = (double)((int)p_15 % ((int)(! p_7[0]) % ((int)(~ p_15) + 594) + 98));
    result = (int)(- ((double)((unsigned int)p_13[3][0][3] / 40530U) + 
                      3463944415. * v_17));
  }
  return result;
}


