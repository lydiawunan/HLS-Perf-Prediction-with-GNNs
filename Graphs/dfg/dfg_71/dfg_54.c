#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 770619110
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p[1], unsigned short p_5, unsigned char p_7[4][5],
         signed char p_11[1][2], double p_17)
{
  signed char v_21;
  short v_19;
  unsigned long v_15;
  char v_13;
  long long v_9;
  char v;
  char result;
  v_21 = (signed char)-39;
  v_19 = (short)-26229;
  v_15 = 51969UL;
  v = (char)p_7[2][4];
  result = p[0];
  v_13 = (char)(~ ((unsigned long)((int)v_19 / ((int)result + 432)) * (
                   (unsigned long)-3365007616.f % 22106UL)) + (v_15 % (unsigned long)(
                                                               (int)(! p_7[2][2]) + 12)) % (unsigned long)(
                                                              (long)(
                                                              (double)v + p_17) % (
                                                              120742987L * (long)v_21 + 561L) + 438L));
  v = (char)((791.176733549 - (double)(2644L * (long)p_17)) / 727390361.);
  v_9 = (long long)(- (- ((unsigned long)p_11[0][0] & 4294909768UL)) | (
                    (unsigned long)(((int)p_7[3][1] % 1473) * ((int)p_7[3][1] - 16746)) + 
                    (unsigned long)(~ v_13) / (- v_15 + 840UL)));
  result = (char)((long long)((int)(! p[0]) % ((int)v * 116 + 620) | (
                              (int)p_5 ^ (int)p_7[0][1])) - ! (~ v_9));
  return result;
}


